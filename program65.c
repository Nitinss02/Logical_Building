// write the program accept the N number form user

#include <stdio.h>  //for printf and scanf
#include <stdlib.h> //for malloc and free

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}
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
    Display(ptr, iCount);
    return 0;
}