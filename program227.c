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
void EvenDisplay(PNODE Head)
{
    printf("Even elements are : \n");
    while (Head != NULL)
    {
        if ((Head->data) % 2 == 0)
        {
            printf("| %d |->", Head->data);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;
    InsetFirst(&first, 111);
    InsetFirst(&first, 100);
    InsetFirst(&first, 50);
    InsetFirst(&first, 20);
    InsetFirst(&first, 11);

    Display(first);
    EvenDisplay(first);
    return 0;
}