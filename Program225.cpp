// Doubly Circular

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE;

class DoublyCL
{
private:
    PNODE first;
    PNODE last;
    int Count;

public:
    DoublyCL();
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
DoublyCL ::DoublyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}
void DoublyCL ::InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;
    Count++;
}
void DoublyCL ::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    last->next = first;
    first->prev = last;
    Count++;
}
void DoublyCL ::Display()
{
    if (first != NULL && last != NULL)
    {
        do
        {
            cout << "|" << first->data << "|<=>";
            first = first->next;
        } while (first != last->next);
    }
    cout << "\n";
}
int DoublyCL ::CountNode()
{
    return Count;
}

void DoublyCL::DeleteFirst()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete (last->next);
        first->prev = last;
        last->next = first;
    }
    Count--;
}

void DoublyCL::DeleteLast()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete (last->next);
        first->prev = last;
        last->next = first;
    }
    Count--;
}
void DoublyCL::InsertAtPos(int no, int iPos)
{
    int size = CountNode();
    int i = 0;
    PNODE newn, Temp = NULL;
    Temp = first;
    if (iPos < 1 || iPos > size + 1)
    {
        cout << "Invalid Position\n";
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
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next->prev = newn;
        Temp->next = newn;
        newn->prev = Temp;
    }
    Count++;
}
void DoublyCL::DeleteAtPos(int iPos)
{
    int size = CountNode();
    int i = 0;
    PNODE Temp = first;
    if (iPos < 1 || iPos > size)
    {
        cout << "Invalid Position\n";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == size + 1)
    {
        DeleteLast();
    }
    else
    {
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        delete (Temp->next->prev);
        Temp->next->prev = Temp;
    }
    Count--;
}

int main()
{

    DoublyCL obj;
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.InsertAtPos(35, 3);
    obj.DeleteAtPos(3);
    obj.Display();
    return 0;
}