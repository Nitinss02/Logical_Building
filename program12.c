#include <stdio.h>

double CalculateCube(int ivalue)
{
    double iCube = 0;

    iCube = ivalue * ivalue * ivalue;
    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto double dAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    dAns = CalculateCube(iNo);

    printf("Cube is : %ld", dAns);
    return 0;
}