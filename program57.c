// write the program to display the additio of digit

#include <stdio.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = SumDigit(iValue);

    printf("Number of Digits are : %d\n", iRet);
    return 0;
}