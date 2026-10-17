#include <stdio.h>
#include <stdlib.h>

int main()
{

    int iValue = 0;
    printf("Enter Numer: \n");
    scanf("%d", &iValue);
    if ((iValue % 2) == 0)
    {
        printf("It is Even Number ");
    }
    else
    {
        printf("Its is Odd Number ");
    }
    return EXIT_SUCCESS;
}