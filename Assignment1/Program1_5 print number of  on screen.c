// Accept one number from user and print that number of * on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Accept
// Description: Display number of * on screen
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}