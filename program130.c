// write a program to Accept the String form user and count the number of Capital charater

#include <stdio.h>
int CountCapital(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);
    printf("frequcny of Capital letter is : %d\n", iRet);
    return 0;
}