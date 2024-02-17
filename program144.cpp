// write the program to calculte the factorial of Number
#include<iostream>
using namespace std;
class number
{
    private:
        int iNo;
    public:
        number(int x)
        {
            iNo = x;
        }
        int factorial()
        {
            int iCnt = 0, iFact = 1;
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact = iFact * iCnt;
            }
            return iFact;
        }
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    number nobj(iValue);
    iRet = nobj.factorial();
    cout<<"the Factoial is : "<<iRet<<endl;
    return 0;
}