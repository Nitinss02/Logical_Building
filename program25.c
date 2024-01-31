// problem statement : accept 2 number from user and display largest Number

#include <stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAverage = 0.0;

    fAverage = ((iNo1 + iNo2 + iNo3) / 3);

    return fAverage;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float iRet = 0.0;

    printf("Enter first NUmebr : \n");
    scanf("%d", &iValue1);

    printf("Enter Second NUmebr : \n");
    scanf("%d", &iValue2);

    printf("Enter thired NUmebr : \n");
    scanf("%d", &iValue3);

    iRet = Average(iValue1, iValue2, iValue3);

    printf("Average is  : %f", iRet);
    return 0;
}