//*******
#include <stdio.h>
#include <stdlib.h>
void displayPattern()
{

    int iCnt = 0;
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    displayPattern();
    printf("\n");
    return EXIT_SUCCESS;
}