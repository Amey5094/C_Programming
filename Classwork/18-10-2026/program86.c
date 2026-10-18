/*
--------------------------------------
            Operation OR OR
--------------------------------------
Result 1    Result 2    Final Result
--------------------------------------
TRUE        TRUE        TRUE             //Short Circuit
TRUE        FALSE       TRUE             //Short Circuit
FALSE       TRUE        TRUE
FASLE       FALSE       FALSE
--------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
void checkDivisible(int iNo)
{
    if (((iNo % 5) == 0) || ((iNo % 3) == 0))
    {
        printf("It is divisible\n");
    }
    else
    {
        printf("It is not a Divisible\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    checkDivisible(iValue);
    return EXIT_SUCCESS;
}