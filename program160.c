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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    return 0;
}