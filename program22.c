#include <stdio.h>

void DisplayExamTime(int iStandard)
{
    if (iStandard == 1)
    {
        printf("Your exam at 8 AM \n");
    }
    else if (iStandard == 2)
    {
        printf("Your exam at 9 AM \n");
    }
    else if (iStandard == 3)
    {
        printf("Your exam at 10 AM \n");
    }
    else if (iStandard == 4)
    {
        printf("Your exam at 11 AM \n");
    }
    else if (iStandard == 5)
    {
        printf("Your exam at 12 NOON \n");
    }
    else
    {
        printf("Wrong Input \n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Your Standard \n");
    scanf("%d", &iValue);

    DisplayExamTime(iValue);
    return 0;
}