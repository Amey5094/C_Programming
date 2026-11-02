/*
    Input:  4
    Ouput:  A   B   C   D
*/

#include <stdio.h>
#include <stdlib.h>

// Time Complexity.: O(2N)
int main()
{
    char ch = '\0';
    for (ch = 'A'; ch <= 'D'; ch++)
    {
        printf("%c\n", ch);
    }

    return EXIT_SUCCESS;
}