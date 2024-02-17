#include <stdio.h>
#include <stdlib.h>

// structure Declaration
struct node
{
    int data;          // 4 bytes
    struct node *next; // 8 bytes
};

int main()
{
    struct node *first = NULL;

    return 0;
}