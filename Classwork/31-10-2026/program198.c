/*
    Input:  4
    Ouput:  A   B   C   D
*/

#include <stdio.h>
#include <stdlib.h>

// Time Complexity.: O(2N)
int main()
{
    int iCnt = 0;
    for (iCnt = 'A'; iCnt <= 'Z'; iCnt++)
    {
        printf("%d\t%o\t%x\t%c\n", iCnt, iCnt, iCnt, iCnt);
    }

    return EXIT_SUCCESS;
}