#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPalindrom(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    int iTemp = 0;
    iTemp = iNo;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if (iRev == iTemp) // issue solve
    {
        return true;
    }
}

int main()
{
    bool bRet = false;
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    bRet = checkPalindrom(iValue);
    if (bRet == true)
    {
        printf("No is palindrom");
    }
    else
    {
        printf("No is noot palindrom");
    }

    return EXIT_SUCCESS;
}