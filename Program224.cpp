// Doubly Linear

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE;

class DoublyLL
{
private:
    PNODE first;

    int Count;

public:
    DoublyLL();
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
DoublyLL ::DoublyLL()
{
    first = NULL;

    Count = 0;
}
void DoublyLL ::InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
}
void DoublyLL ::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    PNODE Temp = first;
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
        newn->prev = Temp;
        Temp = newn;
    }
}
void DoublyLL ::Display()
{
    while (first != NULL)
    {
        cout << "|" << first->data << "|<=>";
        first = first->next;
    }
    cout << "\n";
}
int DoublyLL ::CountNode()
{
    int Count = 0;
    while (first != NULL)
    {
        Count++;
    }
    return Count;
}

void DoublyLL::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL && first->prev == NULL)
    {
        delete (first);
        first = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
}

void DoublyLL::DeleteLast()
{
    PNODE Temp = first;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL && first->prev == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
}
void DoublyLL ::InsertAtPos(int no, int iPos)
{
    PNODE Temp = NULL;
    int iSize = CountNode();
    int i;
    if ((iPos < 1) || (iPos > (iSize + 1)))
    {
        cout << "Invalid Position " << endl;
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(no);
    }
    else
    {

        PNODE newn = new NODE;
        newn->next = NULL;
        newn->prev = NULL;
        newn->data = no;
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next->prev = newn;
        Temp->next = newn;
        newn->prev = Temp;
    }
}
void DoublyLL::DeleteAtPos(int iPos)
{
    int iSize = CountNode();
    int i;
    PNODE Temp = first;
    PNODE TargetedNode = NULL;
    if ((iPos < 1) || (iPos > (iSize + 1)))
    {
        cout << "Invalid Position \n";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iSize + 1)
    {
        DeleteLast();
    }
    else
    {
        for (i = 1; i < iPos; i++)
        {
            Temp = Temp->next;
        }
        TargetedNode = Temp->next;
        Temp->next = Temp->next->prev;
        Temp->next = Temp->next->next;
        delete TargetedNode;
    }
}

int main()
{
    DoublyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertLast(30);
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.InsertLast(70);
    obj.InsertLast(80);
    obj.InsertLast(90);
    obj.InsertLast(100);
    obj.InsertLast(110);
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    obj.InsertAtPos(75, 4);
    obj.Display();

    obj.DeleteAtPos(3);
    obj.Display();
    return 0;
}