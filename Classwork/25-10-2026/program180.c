//*******
#include <stdio.h>
#include <stdlib.h>
void displayPattern(int iNo)
{

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    displayPattern(7);
    printf("\n");
    return EXIT_SUCCESS;
}