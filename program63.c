// write the program accept the N number form user

#include <stdio.h>  //for printf and scanf
#include <stdlib.h> //for malloc and free
int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("enter Number of Elements \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the Element : \n");
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("your enetred elements are : \n");
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    return 0;
}