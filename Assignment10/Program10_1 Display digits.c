// Write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Description: Display digits in reverse order.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

void  DisplayDigit(int iNo)
{
    int iDigit=0;

    if(iNo <0)
    {
        iNo=-iNo;
    }

    while(iNo !=0 )
    {
        iDigit=iNo % 10;
        printf("%d\n",iDigit);
        iNo=iNo / 10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}