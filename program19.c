// problem statement : accept the percentage form user and return there class

#include <stdio.h>

// Logical OR || -> if any of the condition if True then it enter inside the if
// Logical AND && -> if all of the condition are True teh it enters inside the if

void DisplayClass(float fMarks)
{
    if ((fMarks < 0.00) || fMarks > 100.00) // filter
    {
        printf("Invalid Input ");
    }
    if ((fMarks > 0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail ...\n");
    }
    else if ((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("Your in Pass class\n");
    }
    else if ((fMarks >= 50.00f) && (fMarks < 60.00f))
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
    float fValue = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%d", &fValue);

    DisplayClass(fValue);

    return 0;
}