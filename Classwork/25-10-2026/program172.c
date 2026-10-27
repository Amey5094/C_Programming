#include <stdio.h>
#include <stdlib.h>
int countDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while (iNo != 0)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int sumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while (iNo != 0)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        iDigit = iNo % 10;
        iSum = iDigit + iSum;

        iNo = iNo / 10;
    }
    return iSum;
}

float averageDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iSum = sumDigits(iNo);
    iCount = countDigits(iNo);
    fAvg = (float)iSum / (float)iCount;
    return fAvg;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    fRet = averageDigit(iValue);
    printf("Summation of Digits:%.2f\n", fRet);
    return EXIT_SUCCESS;
}