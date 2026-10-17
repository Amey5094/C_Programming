/*
Steps 1: Understand the problem statement
Steps 2: Write the algorythem
Steps 3: Decide the program language
Steps 4: Wirte the Program
Steps 5: Test the Program
*/



////////////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//          User is going to enter any 2 Integers 
//          and we have to preform addition
//
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//  Step 2: Write the algorythem
            // Start
            //     Accept first  no as No1
            //     Accept second  no as No2
            //     Create a variable as ans to strore the result
            //     Perform the addition and store into ans
            //     Diplay the result from Ans
            // End

//
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//  Step 3: Decide the Programming Language
//          We Select C Programming
//
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
//
//  Step 4: write a Program
//          
//
////////////////////////////////////////////////////////////////////////



#include <stdio.h>
int Addition(int iNo1, int iNo2){
    int iAns=0; 
    iAns= iNo1 + iNo2;   // Business Logic
    return iAns;
}
int main(){
    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter First No:\n");
    scanf("%d", &iValue1);
    printf("Enter Second No: \n");
    scanf("%d", &iValue2);
    iResult=Addition(iValue1,iValue2);
    printf("Addition is :%d\n", iResult);
    return 0;
}