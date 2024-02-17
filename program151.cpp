/*

    $   *   *   *   *
    *   $   1   1   *
    *   0   $   1   *
    *   0   0   $   *
    *   *   *   *   $
*/
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
        int i, j;
        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                if (i == j)
                {
                    cout << "$\t";
                }
                else if ((i == iRow) || (i == 1) || (j == iCol) || (j == 1))
                {
                    cout << "*\t";
                }
                else if (i > j)
                {
                    cout << "0\t";
                }
                else if (i < j)
                {
                    cout << "1\t";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout << "Enter Number of Rows : " << endl;
    cin >> iValue1;

    cout << "Enter Number of Column : " << endl;
    cin >> iValue2;

    pattern *pobj = new pattern(iValue1, iValue2);

    pobj->Display();

    delete pobj;

    return 0;
}