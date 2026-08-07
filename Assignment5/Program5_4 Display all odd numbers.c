// Write a program which accepts number from user and print all odd numbers upto number.

// Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: OddDisplay
// Description: Display all odd numbers till given number
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt=0;

    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}