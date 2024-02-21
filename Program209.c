// Doubly Circular Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if (*Head == NULL && *Tail == NULL)
    {

        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if (*Head == NULL && *Tail == NULL)
    {

        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if (*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Head) = (*Head)->next;
        free((*Tail)->next); // free((*Head)->prev);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if (*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if (Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d |<=>", Head->data);
            Head = Head->next;

        } while (Head != Tail->next);
    }
    printf("\n");
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if (Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;

        } while (Head != Tail->next);
    }
    return iCnt;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int iSize = Count(*Head, *Tail);
    int i;
    PNODE newn, Temp = NULL;

    Temp = *Head;
    if (iPos < 1 || iPos > iSize + 1)
    {
        printf("Invalid Position\n");
    }
    if (iPos == 1)
    {
        InsertFirst(Head, Tail, no);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, Tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
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
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iSize = Count(*Head, *Tail);
    int i;
    PNODE Temp = NULL;

    Temp = *Head;
    if (iPos < 1 || iPos > iSize)
    {
        printf("Invalid Position\n");
    }
    if (iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if (iPos == iSize + 1)
    {
        DeleteLast(Head, Tail);
    }
    else
    {

        for (i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        free(Temp->next->prev);
        Temp->next->prev = Temp;
    }
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;
    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121);

    Display(first, last);
    iRet = Count(first, last);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&first, &last, 105, 5);
    Display(first, last);
    iRet = Count(first, last);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&first, &last, 5);
    Display(first, last);
    iRet = Count(first, last);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&first, &last);

    Display(first, last);
    iRet = Count(first, last);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&first, &last);

    Display(first, last);
    iRet = Count(first, last);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}