#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

class SinglyLL
{
private:
    PNODE first;
    int Count;

public:
    SinglyLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void Display();
    int CountNode();
};

/*
Return_value class_Name :: Function_Name()
{

}
*/
SinglyLL ::SinglyLL()
{
    cout << "Inside Constructor\n";
    first = NULL;
    Count = 0;
}
void SinglyLL ::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    if (first == NULL) // if(Count == 0)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    Count++;
}
void SinglyLL ::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    PNODE Temp = first;
    if (first == NULL) // if(Count == 0)
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
    }
    Count++;
}
void SinglyLL ::Display()
{
    int i;
    PNODE Temp = first;
    while (Temp != NULL)
    {
        cout << "|" << Temp->data << "|->";
        Temp = Temp->next;
    }
    cout << "NULL\n";
}
int SinglyLL ::CountNode()
{
    return Count;
}
int main()
{
    SinglyLL obj;
    int iRet = 0;
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);
    obj.Display();
    iRet = obj.CountNode();
    cout << "Numer of Elements in the Linked list are : " << iRet << "\n";

    return 0;
}