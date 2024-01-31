// write a program to check wether the No is palidrom or no

#include <stdio.h>
#include <stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo; // xerox kadhali
    int iDigit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    if (iRev == iCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Value ");
    ;
    scanf("%d", &iValue);
    bRet = CheckPallindrome(iValue);
    if (bRet == true)
    {
        printf("%d is a pallindrome Number \n ", iValue);
    }
    else
    {
        printf("%d is not pallindrome Numbre \n ", iValue);
    }

    return 0;
}