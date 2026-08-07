// Write a program which accept N and print first 5 multiples of N.

// Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: MultipleDisplay
// Description: Display first 5 multiples of number.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    int i=1;

    for(iCnt=1; iCnt<=5 ;iCnt++)
    {
        printf("%d\n",iCnt*iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}