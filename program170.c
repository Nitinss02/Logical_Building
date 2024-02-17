#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsetFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    // Temporay pointer for LL Travesal
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        // Travel the LL Till last node
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        // Add the ADddress of new node at the end of last node
        Temp->next = newn;
    }
}
void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL) // Case 1
    {
        return;
    }
    else if ((*Head)->next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else // Case 3
    {

        *Head = (*Head)->next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL) // Case 1
    {
        return;
    }
    else if ((*Head)->next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else // Case 3
    {
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}
void InsertAtPos(PPNODE Head, int NO, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE Temp = *Head;

    // Case 1 : Invalid Position     eg. 11, -2, 9
    if (iPos < 1 || iPos > Size + 1)
    {
        printf("Invaid Position \n");
        return;
    }
    // case 2 : First Position  eg  1
    if (iPos == 1)
    {
        InsetFirst(Head, NO);
    }
    // CAse 3 : Last Position   eg. 7
    else if (iPos == Size + 1)
    {
        InsertLast(Head, NO);
    }
    // case 4 : positon is in between first and last eg 4,5
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = NO;
        newn->next = NULL;
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}
void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE Temp = *Head;
    PNODE targetednode = NULL;
    int i = 0;
    // Case 1 : Invalid Position     eg. 11, -2, 9
    if (iPos < 1 || iPos > Size)
    {
        printf("Invaid Position \n");
        return;
    }
    // case 2 : First Position  eg  1
    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    // CAse 3 : Last Position   eg. 6
    else if (iPos == Size)
    {
        DeleteLast(Head);
    }
    // case 4 : positon is in between first and last eg 4,5
    else
    {
        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        targetednode = Temp->next;
        Temp->next = Temp->next->next;
        free(targetednode);
    }
}
void Display(PNODE Head)
{
    printf("\nContents of Linked List : \n");
    while (Head != NULL)
    {
        printf("| %d |-> ", Head->data);
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
    InsetFirst(&first, 111);
    InsetFirst(&first, 101);
    InsetFirst(&first, 51);
    InsetFirst(&first, 21);
    InsetFirst(&first, 11);

    InsertLast(&first, 121);
    InsertLast(&first, 151);

    InsertAtPos(&first, 105, 5);
    Display(first);
    iRet = Count(first);
    printf("The total Elements are : %d", iRet);

    DeleteAtPos(&first, 5);
    Display(first);
    iRet = Count(first);
    printf("The total Elements are : %d", iRet);

    return 0;
}