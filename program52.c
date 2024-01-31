#include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    printf("value of iNO is : %d\n", iNo);
    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("value of iNO is : %d\n", iNo);

    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("value of iNO is : %d\n", iNo);

    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("value of iNO is : %d\n", iNo);
}

int main()
{
    int iValue = 721;

    // printf("Enter Number :\n");
    // scanf("%d",&iValue);

    Display(iValue);
    return 0;
}