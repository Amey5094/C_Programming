#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Addition
//   Input          : Integer,Integer,
//  Output          :Interger
//  Description     : Perform Additon
//  Date             : 04/10/2026
//  Author          : Amey Dilip Kalekar.
//
////////////////////////////////////////////////////////////////////////
int Addition(
    int iNo1, // First Input
    int iNo2  // Second Input
)
{
    int iAns = 0;
    iAns = iNo1 + iNo2; // Business Logic
    return iAns;
}

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

////////////////////////////////////////////////////////////////////////
// Steps 5: Test the Program

// Tested test Cases
//
//
//  Input1  Input2  Output
//  10      11      21
//  11      0       11
//  0       11      11
//  20      -9      11
//  -9      20      11
//  -20     -11     -31
////////////////////////////////////////////////////////////////////////