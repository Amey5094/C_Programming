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

int main()
{
    int iValue = 0;
    float fAvg = 0.0f;
    int iSum = 0, iCount = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);
    iSum = sumDigits(iValue);
    iCount = countDigits(iValue);
    fAvg = (float)iSum / (float)iCount;
    printf("Number of Digits: %d\n", iCount);
    printf("Summation of digits: %d\n", iSum);
    printf("Average of Digits:%.2f\n", fAvg);
    return EXIT_SUCCESS;
}