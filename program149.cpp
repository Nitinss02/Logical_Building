// write a program on Pattern printing...
#include <iostream>
using namespace std;

class pattern
{
private:
    int iRow;
    int iCol;

public:
    pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }
    void Display()
    {
        // logic
    }
};
int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout << "Enter Number of Rows : " << endl;
    cin >> iValue1;

    cout << "Enter Number of Column : " << endl;
    cin >> iValue2;

    pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}