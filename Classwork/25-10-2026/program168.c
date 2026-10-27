#include <stdio.h>
#include <stdlib.h>

float averageDigit(int iNo)
{
    int idigit = 0;
    int iSum = 0;
    int iCount = 0;
    while (iNo != 0)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        idigit = iNo % 10;
        iCount++;
        iSum = idigit + iCount;
        iSum = iSum / 10;
    }
    return iSum / iCount;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    fRet = averageDigit(iValue);
    printf("Summation of Digits:%f\n", fRet);
    return EXIT_SUCCESS;
}