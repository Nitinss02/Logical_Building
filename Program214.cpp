#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

class SinglyLL
{
public:
    PNODE first;
    int Count;

    SinglyLL()
    {
        cout << "Inside Constructor\n";
        first = NULL;
        Count = 0;
    }
    void InsertFirst(int no)
    {
        }
    void InsertLast(int no)
    {
    }
    void Display()
    {
    }
};

int main()
{
    SinglyLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout << "Numer of Elements in the Linked list are : " << obj.Count << "\n";

    return 0;
}