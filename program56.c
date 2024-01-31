#include <stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;
    // joparyanta iNo zero hot nahi toparyanta
    while (iNo != 0)
    {

        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("Number of Digits are : %d\n", iRet);
    return 0;
}