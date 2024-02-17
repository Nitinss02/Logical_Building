// write a program to Accept the String form user and count the number of Digit

#include <stdio.h>
int CountDigit(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str >= 48 && *str <= 57)
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

    iRet = CountDigit(Arr);
    printf("frequcny of Digit is : %d\n", iRet);
    return 0;
}