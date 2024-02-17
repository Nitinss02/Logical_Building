// write a program to Accept the String form user and count the number of charater

#include <stdio.h>

int strlenx(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
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
    iRet = strlenx(Arr);
    printf("Length of String is : %d", iRet);
    return 0;
}