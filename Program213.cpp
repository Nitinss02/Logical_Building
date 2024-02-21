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
        first = NULL;
        Count = 0;
    }
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPOs(int no, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void Display();
};

int main()
{

    return 0;
}