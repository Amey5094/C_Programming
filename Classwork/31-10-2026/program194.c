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
    for (iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%c\n", iCnt);
    }

    return EXIT_SUCCESS;
}