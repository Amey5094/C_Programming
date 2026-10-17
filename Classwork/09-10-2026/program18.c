#include <stdio.h>
#include <stdlib.h>

void checkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("It is Even Number ");
    }
    else
    {
        printf("Its is Odd Number ");
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Numer: \n");
    scanf("%d", &iValue);
    checkEven(iValue);
    return EXIT_SUCCESS;
}