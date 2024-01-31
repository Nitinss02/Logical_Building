#include <stdio.h>

long int CalculateCube(int ivalue)
{
    long int iCube = 0;

    iCube = ivalue * ivalue * ivalue;
    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %ld", iAns);
    return 0;
}