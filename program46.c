// write a program to find factor of number and addition of factor
#include <stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0) // 4
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);
    iRet = SumFactors(iValue);
    printf("Sum of Factor are : %d", iRet);
    return 0;
}

// Time Complexity : O(N/2)