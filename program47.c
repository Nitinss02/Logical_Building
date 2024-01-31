// accept the numeber from user check wethaer perfect number or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0) // 4
        {
            iSum += iCnt;
        }
    }
    if (iSum == iNo) // 4
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);
    bRet = CheckPerfect(iValue);
    if (bRet == true)
    {
        printf("%d is an perfect Number\n", iValue);
    }
    else
    {
        printf("%d is not a perfect Number\n", iValue);
    }
    return 0;
}

// Time Complexity : O(N/2)