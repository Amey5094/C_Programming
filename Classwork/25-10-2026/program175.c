#include <stdio.h>
#include <stdlib.h>

int reverse(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    iRet = reverse(iValue);
    printf("Reverse no is :%d\n", iRet);
    return EXIT_SUCCESS;
}