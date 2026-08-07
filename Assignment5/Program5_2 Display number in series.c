// Write a program which accept number from user and print numbers till that number.

// Time complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display number in series.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}