#include <stdio.h>
#include <stdlib.h>
void displayOddDigits(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            printf("Even:%d \n", iDigit);
        }
        else
        {
            printf("Odd:%d \n", iDigit);
        }

        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    displayOddDigits(iValue);
    return EXIT_SUCCESS;
}