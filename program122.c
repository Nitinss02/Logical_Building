// write a program to Accept the String form user

#include <stdio.h>

int main()
{
    char Arr[20];
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    printf("Entered String is : %s\n", Arr);

    return 0;
}