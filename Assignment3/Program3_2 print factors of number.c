// Write a program which accept number from user and print factors of that number

#include<stdio.h>


////////////////////////////////////////////////////////////
//
// Function Name: DisplayFactor
// Description: Display factors of number.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 20/01/2025
//
///////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt ==0 )
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}