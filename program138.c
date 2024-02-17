// write a program to Accept the String form user and replace by small Case

#include <stdio.h>
int strlwrx(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    strlwrx(Arr);
    printf("Updated String is %s\n", Arr);
    return 0;
}