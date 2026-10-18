#include <stdio.h>
#include <stdlib.h>
void checkPerfect(int iNo)
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
        printf("Its is perfect number\n");
    }
    else
    {
        printf("It is not perfect number\n");
    }
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    checkPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time Complexcity: O(N/2)