#include <stdio.h>
#include <stdlib.h>
void checkDivisible(int iNo)
{
    if ((iNo % 3) == 0)
    {
        printf("It is divisible");
    }
    else
    {
        printf("It is not a Divisible");
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