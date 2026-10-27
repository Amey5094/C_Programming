// 5
#include <stdio.h>
#include <stdlib.h>
void displayPattern(int iNo)
{

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the frequrency\n");
    scanf("%d", &iValue);
    displayPattern(iValue);
    printf("\n");
    return EXIT_SUCCESS;
}