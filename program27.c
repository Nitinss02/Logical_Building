#include <stdio.h>

float Maximum(int iNo1, int iNo2, int iNo3)
{
    if ((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;
    }
    else if ((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter first NUmebr : \n");
    scanf("%d", &iValue1);

    printf("Enter Second NUmebr : \n");
    scanf("%d", &iValue2);

    printf("Enter thired NUmebr : \n");
    scanf("%d", &iValue3);

    iRet = Maximum(iValue1, iValue2, iValue3);

    printf("Largest No is : %d", iRet);
    return 0;
}