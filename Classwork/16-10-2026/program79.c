// Input 5
// Ouput 1+2+3+4+5=15

#include <stdio.h>
#include <stdlib.h>
void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d\t", iCnt);
    }
    printf("\n");
}
int main()
{
    int iCnt = 0;
    int iSum = 0;
    iCnt = 1;
    // iSum=0+1   ->1
    iSum = iSum + iCnt;
    iCnt++; // 2
    // iSum=1+2 -> 3
    iSum = iSum + iCnt;
    iCnt++; // 3
    // iSum=1+2 -> 3
    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    printf("%d \n", iSum);
    return EXIT_SUCCESS;
}