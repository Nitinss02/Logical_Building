#include <stdio.h>
#include <stdlib.h>

int OddDisplay(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 1)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    return iEvenCnt;
}
int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

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

    iRet = OddDisplay(ptr, iCount); // Display(100, 4)

    printf("\ntotal Even numbers are : %d\n", iRet);
    free(ptr);

    printf("Dynamic memory gets deallocated sucessfully...\n");
    return 0;
}