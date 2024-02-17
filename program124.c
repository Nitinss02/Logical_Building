// write a program to Accept the String form user

#include <stdio.h>

void Display(char str[])
{
    printf("Stirng is : %s\n", str);
}
int main()
{
    char Arr[20];
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    Display(Arr);

    return 0;
}