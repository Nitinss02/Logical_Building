// write a program to accept N number from user and average of that number
#include <stdio.h>
#include <stdlib.h>
float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    // float Average = 0.0f;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum / (float)iSize);
}
int main()
{
    int iCount = 0, iCnt = 0;
    float fRet = 0.0f;
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
    fRet = Average(ptr, iCount);
    printf("Average is : %f \n", fRet);
    free(ptr);
    printf("Dynamic Memory gets deallocated Successfully....\n");
    return 0;
}
