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
void Display(PNODE Head)
{
    printf("Elemnt of Linked list are : \n");
    while (Head != NULL)
    {
        printf("| %d |->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);

    iRet = Count(first);
    printf("The Elements are : %d\n", iRet);
    return 0;
}