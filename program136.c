// write a program to Accept the String form user and replace by _ underscore

#include <stdio.h>
int Replace(char str[])
{
    while (*str != '\0')
    {
        if (*str == 'a')
        {
            *str = '_';
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    Replace(Arr);
    printf("Updated String is %s\n", Arr);
    return 0;
}