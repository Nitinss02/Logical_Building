// write a code to check weather number is prime or not

#include <stdio.h>
#include <stdbool.h>
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if (iNo < 0) // updator
    {
        iNo = -iNo;
    }
    //      1                   2       3
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0) // 4
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is a Prime number \n", iValue);
    }
    else
    {
        printf("%d is not a prime Number \n", iValue);
    }
    return 0;
}