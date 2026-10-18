#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iCnt = 0;
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\n", iCnt);
    }
    return EXIT_SUCCESS;
}