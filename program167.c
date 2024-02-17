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

    Display(first);
    iRet = Count(first);
    printf("The total Elements are : %d", iRet);

    InsertLast(&first, 121);
    InsertLast(&first, 151);
    InsertLast(&first, 201);
    InsertLast(&first, 211);

    Display(first);
    iRet = Count(first);
    printf("The total Elements are : %d", iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);
    printf("The total Elements are : %d", iRet);
    return 0;
}