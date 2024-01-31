// problem statement : accept radius from user and calculate the area of circle

// step1 : understand the problem statement
// conclusion : we are going to use the formula as PI*R*R

// step 2 : Alogrithm

/*
    START
        Accept radius form user and store into RADIUS
        create variable as PI and store value 3.14
        Calculate are PI* RADIOU * RADIUS
        Display the value of Area to the user
    STOP

*/
#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateArea
//  Description :   It is used to calculate area of circle
//  Input :         flaot
//  Output :        flaot
//  Auther Name :   nitin sahadu sonawane
//  Date :          02/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fvalue)
{
    auto float fAns;

    fAns = PI * fvalue * fvalue;
    return fAns;
}

//////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////

int main()
{
    auto float FRadius = 0.0f;
    auto float FArea = 0.0f;

    printf("Enter the Radius of circle \n");
    scanf("%f", &FRadius);

    FArea = CalculateArea(FRadius);

    printf("The area of circle %f", FArea);

    return 0;
}