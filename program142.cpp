// write the program to calculte the factorial of Number
#include<iostream>
using namespace std;
int Factorial(int iNo)
{
    int iFact = 1, iCnt =0;
    for(iCnt =1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact *iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter the Number \n";
    cin>>iValue;
    iRet = Factorial(iValue);
    cout<<"The Factorial is : "<<iRet<<endl;
    return 0;
}