// write a program to Accept the String form user and count the number of a

#include <stdio.h>

int CountA(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == 'a')
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
    iRet = CountA(Arr);
    printf("Count letter is : %d", iRet);
    return 0;
}