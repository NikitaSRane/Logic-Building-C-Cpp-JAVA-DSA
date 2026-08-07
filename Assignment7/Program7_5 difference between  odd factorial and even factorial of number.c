// Write a program which returns difference between Even factorial and odd factorial of given number.

//Time complexity- O(N)

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FactorialDiff
// Description: Display difference between  odd factorial and even factorial of number on screen
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEDiff=1;
    int iODiff=1;

    if(iNo<=0) // updater
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEDiff=iEDiff*iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iODiff=iODiff*iCnt;
        }
    }
    return iEDiff-iODiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial difference is: %d.",iRet);

    return 0;
}