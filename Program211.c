#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Void InsertFirst(PPNODE Head, int no)
void Push(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;
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
// void DeleteFirst(PPNODE)
int Pop(PPNODE Head)
{
    int iValue = 0;
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        printf("STACK IS EMPTY\n");
        return iValue;
    }
    else
    {
        iValue = (*Head)->data;
        *Head = (*Head)->next;
        free(Temp);
    }
    return iValue;
}
void Display(PNODE Head)
{
    printf("Elements of stack are : \n");
    while (Head != NULL)
    {
        printf("| %d |\n", Head->data);
        Head = Head->next;
    }
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;
    Push(&first, 101);
    Push(&first, 51);
    Push(&first, 21);
    Push(&first, 11);
    Display(first);

    iRet = Pop(&first);
    printf("Poped Elemets is : %d\n", iRet);
    iRet = Pop(&first);
    printf("Poped Elemets is : %d\n", iRet);
    iRet = Pop(&first);
    printf("Poped Elemets is : %d\n", iRet);
    Display(first);
    iRet = Pop(&first);
    printf("Poped Elemets is : %d\n", iRet);
    iRet = Pop(&first);
    printf("Poped Elemets is : %d\n", iRet);
    return 0;
}