// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display Hello if number is less than 10.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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