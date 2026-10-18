#include <stdio.h>
#include <stdlib.h>
int sumFactors(int iNo)
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
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    iRet = sumFactors(iValue);
    printf("Summatiion of Factors:%d\n", iRet);
    return EXIT_SUCCESS;
}

// Time Complexcity: O(N/2)