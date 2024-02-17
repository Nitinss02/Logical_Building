#include <stdio.h>
#include <stdlib.h>

// structure Declaration
struct node
{
    int data;          // 4 bytes
    struct node *next; // 8 bytes
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step1 : allocate Memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // step2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    // step 3: check whether LL is empty or not
    if (*Head == NULL) // Linked List is empty
    {
        *Head = newn;
    }
    else // LL contains atleat 1 NOde in it
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    return 0;
}