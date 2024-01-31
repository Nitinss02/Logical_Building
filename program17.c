// problem statement : accept a marks and outof marks form user to calculate percentage

/*
    START
        accept the iValue1 form user
        accept the iValue2 form user

    STOP
*/
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePercentage
//  Description :   It is used to calculate percentage of marks
//  Input :         int int
//  Output :        flaot
//  Auther Name :   nitin sahadu sonawane
//  Date :          03/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;
    if ((iMarks < 0) || (iTotal < 0 || iMarks > iTotal)) // filter
    {
        printf("Invalid input \n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100);

    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the marks : \n");
    scanf("%d", &iValue1);

    printf("Enter the total marks : \n");
    scanf("%d", &iValue2);

    fRet = CalculatePercentage(iValue1, iValue2);

    printf("Your Percentage is : %f \n", fRet);

    return 0;
}