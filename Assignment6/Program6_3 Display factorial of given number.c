// Write a program to find factorial of given number.

// Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Factorial
// Description: Display factorial of given number.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

unsigned long int Factorial(int iNo)
{
    int iCnt=0;
    unsigned long int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    unsigned long int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of %d is %lu.",iValue,iRet);

    return 0;
}