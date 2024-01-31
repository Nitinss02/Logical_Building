// problem statement : accept the percentage form user and return there class

#include <stdio.h>
void DisplayClass(float fMarks)
{
    if ((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are fail ...\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your in Pass class\n");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your in second class\n");
    }
    else if ((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your in First class\n");
    }
    else if ((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your in First class with Distinction \n");
    }
}
int main()
{
    auto float fValue = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%d", &fValue);

    DisplayClass(fValue);

    return 0;
}