// Write a program which accept number from user and display below pattern.

// Time Complexity- O(2N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display pattern.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}   

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}