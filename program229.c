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

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");
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
int SumEven(PNODE Head)
{
    int iSum = 0;
    while (Head != NULL)
    {
        if ((Head->data) % 2 == 0)
        {
            iSum = iSum + Head->data;
        }
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    InsetFirst(&first, 111);
    InsetFirst(&first, 100);
    InsetFirst(&first, 50);
    InsetFirst(&first, 20);
    InsetFirst(&first, 11);

    Display(first);
    iRet = SumEven(first);
    printf("Sumation of Even elements is : %d\n", iRet);
    return 0;
}