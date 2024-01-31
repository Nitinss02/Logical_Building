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
// Addition is a function which accepts 2 parameter as integer and it return interger

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;

    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    auto int ivalue1 = 0;
    auto int ivalue2 = 0;
    auto int iAns = 0;
    printf("Enter first number\n");
    scanf("%d", &ivalue1);
    printf("Enter Second number\n");
    scanf("%d", &ivalue2);

    iAns = Addition(ivalue1, ivalue2);

    printf("Addition is : %d \n", iAns);
    return 0;
}

// step 5 : test the code

/*
    test case 1:
    input 10 11
    output 21

    test case 2:
    input 10 0
    output 10

    test case 3:
    input 12 -6
    output 6

    test case 4:
    input -5 -6
    output -11
*/