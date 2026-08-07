//  Write a recursive program which accept number from user and display below pattern.

//  Input:  5
//  Output: 5   *   4   *   3   *   2   *   1   *

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: DisplayR
// Description: Display pattern
// Input: Integer
// Output: None
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////

void DisplayI(int iValue)
{
    while(iValue >=1 )
    {
        printf("%d\t*\t",iValue);
        iValue--;
    }

}

void DisplayR(int iValue)
{
    if(iValue >= 1)
    {
        printf("%d\t*\t",iValue);
        iValue--;
        DisplayR(iValue);
    }
}


int main()
{
    int iNo= 0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    DisplayR(iNo);

    return 0;
}