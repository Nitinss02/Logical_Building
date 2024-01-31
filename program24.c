// problem statement : accept 2 number from user and display largest Number

#include <stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if (iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first NUmebr : \n");
    scanf("%d", &iValue1);

    printf("Enter Second NUmebr : \n");
    scanf("%d", &iValue2);

    iRet = Minimum(iValue1, iValue2);

    printf("Smallest Numer is : %d", iRet);
    return 0;
}