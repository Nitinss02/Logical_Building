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

// void InsetLast(PPNODE Head, int no)
void Enqueue(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *Head;
    newn->data = no;
    newn->next = NULL;
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}
int Dequeue(PPNODE Head)
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
    printf("\nElements of Queue are : \n");
    while (Head != NULL)
    {
        printf("| %d |\t", Head->data);
        Head = Head->next;
    }
    printf("\n");
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;
    Enqueue(&first, 11);
    Enqueue(&first, 21);
    Enqueue(&first, 51);
    Enqueue(&first, 101);

    Display(first);

    iRet = Dequeue(&first);
    printf("Removed Elements from Queue is : %d\n", iRet);
    Display(first);
    iRet = Dequeue(&first);
    printf("Removed Elements from Queue is : %d\n", iRet);
    iRet = Dequeue(&first);
    printf("Removed Elements from Queue is : %d\n", iRet);

    Display(first);
    return 0;
}