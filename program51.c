#include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;
}

int main()
{
    int iValue = 721;

    // printf("Enter Number :\n");
    // scanf("%d",&iValue);

    Display(iValue);
    return 0;
}