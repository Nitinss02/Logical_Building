// write a program to Accept the String form user and count the Frequency

#include <stdio.h>

int Count(char str[], char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
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
    char cValue = '\0';
    int iRet = 0;
    printf("Enter the String \n");
    scanf("%[^\n]s", Arr);
    printf("Enter the charater for frequency calculation : \n");
    scanf(" %c", &cValue);
    iRet = Count(Arr, cValue);
    printf("Frequency of letter is : %d", iRet);
    return 0;
}