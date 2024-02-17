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
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    number nobj(iValue);
    return 0;
}