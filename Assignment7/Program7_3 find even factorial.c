// Write a program to find even factorial of given number.

//Time complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: EvenFactorial
// Description: Display Even factorial of number on screen
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
///////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even factorial of number is: %d",iRet);

    return 0;
}