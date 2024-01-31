// write a program to accept N number from user and find the Number to occour how many time
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0, iValue = 0;
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
    printf("Enter to Search the value\n");
    scanf("%d", &iValue);
    iRet = Frequency(ptr, iCount, iValue);
    printf("%d Occour %d times\n", iValue, iRet);

    free(ptr);
    printf("Dynamic Memory gets deallocated Successfully....\n");
    return 0;
}
