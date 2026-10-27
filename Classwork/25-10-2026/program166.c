#include <stdio.h>
#include <stdlib.h>
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
    int iRet = 0;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    iRet = sumDigits(iValue);
    printf("Summation of Digits:%d\n", iRet);
    return EXIT_SUCCESS;
}