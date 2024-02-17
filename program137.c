// write a program to Accept the String form user and replace by _ underscore

#include <stdio.h>
int ReplaceVowel(char str[])
{
    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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

    ReplaceVowel(Arr);
    printf("Updated String is %s\n", Arr);
    return 0;
}