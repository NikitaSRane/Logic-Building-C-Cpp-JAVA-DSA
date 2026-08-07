// Accept one number from user and print that number of * on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display number of * on screen.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<=0) // updater
    {
        iNo=-iNo; 
    }

    while(iCnt<iNo)
    {
        printf("*\n");
        iCnt++;
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