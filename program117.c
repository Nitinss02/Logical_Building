// write a program to check Weather Charater is Small or not

#include <stdio.h>
#include <stdbool.h>
bool CheckSmall(char cValue)
{
    if ((cValue >= 'a') && (cValue <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false;
    printf("Enter the charater \n");
    scanf("%c", &ch);
    bRet = CheckSmall(ch);
    if (bRet == true)
    {
        printf("Its a Small letter\n");
    }
    else
    {
        printf("Its not a Small Letter \n");
    }

    return 0;
}