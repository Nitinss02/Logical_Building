// Singly Circular

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE;

class SinglyCL
{
private:
    PNODE first;
    PNODE Last;
    int Count;

public:
    SinglyCL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void Display();
    int CountNode();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int no, int iPos);
    void DeleteAtPos(int iPos);
};

/*
Return_value class_Name :: Function_Name()
{

}
*/
SinglyCL ::SinglyCL()
{
    first = NULL;
    Last = NULL;
    Count = 0;
}
void SinglyCL ::InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    if ((first == NULL) && (Last == NULL))
    {
        first = newn;
        Last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    Last->next = first;
    Count++;
}
void SinglyCL ::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    if ((first == NULL) && (Last == NULL))
    {
        first = newn;
        Last = newn;
        Last->next = first;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = first;
    }
    Count++;
}
void SinglyCL ::Display()
{
    PNODE Temp = first;
    if ((first != NULL) && (Last != NULL))
    {
        do
        {
            cout << "|" << Temp->data << "|->";
            Temp = Temp->next;
        } while (Temp != Last->next);
    }
}
int SinglyCL ::CountNode()
{
    return Count;
}

void SinglyCL::DeleteFirst()
{
    if ((first == NULL) && (Last == NULL))
    {
        return;
    }
    else if (first == Last)
    {
        delete (first);
        first = NULL;
        Last = NULL;
    }
    else
    {
        first = first->next;
        delete (Last->next);
        Last->next = first;
    }
    Count--;
}

void SinglyCL::DeleteLast()
{
    PNODE Temp = first;
    if ((first == NULL) && (Last == NULL))
    {
        return;
    }
    else if (first == Last)
    {
        delete (first);
        first = NULL;
        Last = NULL;
    }
    else
    {
        while (Temp->next != Last)
        {
            Temp = Temp->next;
        }
        delete (Last);
        Last = Temp;
        Last->next = first;
    }
    Count--;
}
void SinglyCL::InsertAtPos(int no, int iPos)
{
    int size = 0, i = 0;
    size = CountNode();
    PNODE Temp = first;
    PNODE newn = NULL;
    if ((iPos < 1) || (iPos > size + 1))
    {
        cout << "Invalid Position";
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == size + 1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->next = NULL;
        newn->data = no;

        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}
void SinglyCL::DeleteAtPos(int iPos)
{
    int size = 0, i = 0;
    size = CountNode();
    PNODE Temp = first;
    PNODE TargetNode = NULL;
    if ((iPos < 1) || (iPos > size))
    {
        cout << "Invalid Position";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == size)
    {
        DeleteLast();
    }
    else
    {
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = Temp->next->next;
        delete (TargetNode);
    }
}

int main()
{
    SinglyCL obj;
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.InsertLast(70);
    obj.InsertLast(80);
    obj.InsertLast(90);
    obj.InsertLast(100);
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteAtPos(3);
    obj.InsertAtPos(30, 3);
    obj.Display();
    return 0;
}