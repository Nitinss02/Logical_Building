// write a program to convert the Capital letter into Small letter

#include <stdio.h>
char ConvertCapital(char cValue)
{
    return cValue - 32;
}
int main()
{
    char ch = '\0';
    char cRet = '\0';
    printf("Enter the charater \n");
    scanf("%c", &ch);
    cRet = ConvertCapital(ch);

    printf("Converted Capital Letter is : %c", cRet);

    return 0;
}