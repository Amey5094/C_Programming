/*
--------------------------------------
            Operation &&
--------------------------------------
Result 1    Result 2    Final Result
--------------------------------------
TRUE        TRUE        TRUE
TRUE        FALSE       FALSE
FALSE       TRUE        FALSE               //Short Circuit
FASLE       FALSE       FALSE               //Short Circuit
--------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
void checkDivisible(int iNo)
{
    if (((iNo % 5) == 0) && ((iNo % 3) == 0))
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