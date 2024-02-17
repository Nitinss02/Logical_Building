// write a program to convert the Capital letter into Small letter

#include <stdio.h>
char ConvertSmall(char cValue)
{
    return cValue + 32;
}
int main()
{
    char ch = '\0';
    char cRet = '\0';
    printf("Enter the charater \n");
    scanf("%c", &ch);
    cRet = ConvertSmall(ch);

    printf("Converted small Letter is : %c", cRet);

    return 0;
}