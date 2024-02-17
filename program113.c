#include <stdio.h>
int main()
{
    char ch = '\0';
    printf("Enter the charater : \n");
    scanf("%c", &ch);
    printf("ASCII value of the charater is  : %d\n", ch);
    printf("ASCII value of the charater is in Octal : %o\n", ch);
    printf("ASCII value of the charater is in HEXADECIMAL : %x\n", ch);
    return 0;
}