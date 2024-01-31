// write a program to accept N number from user and find the Maximum Number
#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
    printf("Enter Number of Elemnts that you want to Enter : \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated successfully...\n");
    printf("Enter the Element\n");
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter th element no %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }
    iRet = Maximum(ptr, iCount);
    printf("maximum element is : %d \n", iRet);
    free(ptr);
    printf("Dynamic Memory gets deallocated Successfully....\n");
    return 0;
}
