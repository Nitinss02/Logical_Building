/*
    START
        Accept number form user
        Divide that number by 2
        if remainder is 0 then display even
        otherwise display Odd
    STOP

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
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
    int ivalue = 0;
    bool bRet = false;

    printf("Enter Number ..: \n");
    scanf("%d", &ivalue);

    bRet = CheckEven(ivalue);
    if (bRet == true)
    {
        printf("The %d is even\n ", ivalue);
    }
    else
    {
        printf("%d is an odd number \n", ivalue);
    }
    return 0;
}