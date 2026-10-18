#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool checkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
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
    int iValue = 0, iRet = 0;
    bool bRet = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    bRet = checkPerfect(iValue);
    if (bRet == true)
    {
        printf("Its is perfect number");
    }
    else
    {
        printf("It is not perfect number");
    }
    return EXIT_SUCCESS;
}

// Time Complexcity: O(N/2)