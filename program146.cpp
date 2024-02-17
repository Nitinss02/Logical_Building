// write a program for N numbers
#include <iostream>
using namespace std;
class Array
{
private:
    int *Arr; // int Arr[];
    int iSize;

public:
    Array(int x) // paramertised Constructor
    {
        iSize = x;
        Arr = new int[iSize];
    }
    ~Array() // Destructor
    {
        delete[] Arr;
    }
    void Accept() // Member function
    {
        int iCnt = 0;
        cout << "please Enter the elements : " << endl;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }
    void Display() // Member function
    {
        cout << "enter of the Array are : " << endl;
        int iCnt = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << endl;
    }
}; // End of Class
int main()
{
    int iLength = 0;
    cout << "Enter the Number of Elements that you want to store : " << endl;
    cin >> iLength;
    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}