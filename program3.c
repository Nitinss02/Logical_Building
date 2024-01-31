// problem statement:  Accept 2 values from user and perform the addition

// step 1 : understand th problem statement
// conclusion : we have to accept 2  integers and perform its addition.

// step 2: write the algorithm

/*
    START
        Accept first number from user and store it into no1
        Accept first number from user and store it into no2
        create one variable to store the result named as ans
        perform addition of no1 and no2, store the result in ans
        Display  the result from ans to the user
    STOP
*/

// step 3 : decide the programing language (c, c++ , java, python)
// we select c programing

// step 4 : write the program

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter first number\n");
    scanf("%d", &i);
    printf("Enter Second number\n");
    scanf("%d", &j);

    k = i + j;

    printf("Addition is : %d \n", k);
    return 0;
}