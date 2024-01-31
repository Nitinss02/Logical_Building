// write a program give the number form user and reverse that number

#include <stdio.h>
int RevNo(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Value ");
    ;
    scanf("%d", &iValue);
    iRet = RevNo(iValue);
    printf("reverse number is : %d", iRet);

    return 0;
}