#include "header.h"

////////////////////////////////////////////////////////////////////////
//
//  Entry Point of the appication
//
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;
    printf("Enter First No:\n");
    if (scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr, "unable to proceed input is invalid"); // to handling input  error
        return EXIT_FAILURE;
    }
    printf("Enter Second No: \n");
    if (scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr, "unable to proceed input is invalid"); // to handling input  error
        return EXIT_FAILURE;
    }
    iResult = Addition(iValue1, iValue2);
    printf("Addition is :%d\n", iResult);
    return EXIT_SUCCESS;
}
