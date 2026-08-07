// Write a program which accept number from user and print that number of $ and * on screen.

// Time complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display given number of $ and *.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0) //updater
    {
        iNo=-iNo;
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}