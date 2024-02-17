// write a program to Accept the String form user and replace by Capital Case

#include <stdio.h>
int struprx(char str[])
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    struprx(Arr);
    printf("Updated String is %s\n", Arr);
    return 0;
}