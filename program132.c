// write a program to Accept the String form user and count the Vowels

#include <stdio.h>
int CountVowel(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);

    iRet = CountVowel(Arr);
    printf("frequcny of Vowels is : %d\n", iRet);
    return 0;
}