#include <iostream>

using namespace std;

class String
{
private:
    char *str;
    int iSize;

public:
    String()
    {

        str = new char[20];
    }
    String(int x)
    {
        iSize = x;
        str = new char[iSize];
    }
    ~String()
    {
        delete[] str;
    }
    void Accept()
    {
        cout << "Enter the String : " << endl;
        cin.getline(str, iSize);
    }
    void Display()
    {
        cout << "String is : " << str << endl;
    }
    int CountCapital()
    {
        int iCnt = 0;
        while (*str != '\0')
        {
            if ((*str >= 'A') && (*str <= 'Z'))
            {
                iCnt++;
            }
            str++;
        }
        return iCnt;
    }
};
int main()
{
    int iRet = 0;
    String *sobj = new String(30);
    sobj->Accept();
    sobj->Display();
    iRet = sobj->CountCapital();
    cout << "Capital count is : " << iRet << endl;
    sobj->Display();
    // delete sobj;

    return 0;
}