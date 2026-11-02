//  $ # @ & *

#include <stdio.h>
#include <stdlib.h>
void countFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else // issue
        {
            iCountDigit++;
        }

        str++;
    }
    printf("Number of capital letters:%d\n", iCountCapital);
    printf("Number of small letters:%d\n", iCountSmall);
    printf("Number of digits:%d\n", iCountDigit);
}
int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);
    countFrequencyX(Arr);

    return EXIT_SUCCESS;
}