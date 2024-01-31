#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("\nElemnts of the Array \n");
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
    printf("Enter the number of elements that you want to enter :\n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dyanamic memory gets allocated successfully for %d elemnets \n", iCount);
    printf("Enter the %d Values...\n", iCount);

    for (iCnt = 0; iCnt < iCount; iCnt++) // O[N]
    {
        printf("\n enter the element no %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iCount); // Display(100, 4)

    free(ptr);

    printf("Dynamic memory gets deallocated sucessfully...\n");
    return 0;
}