// Write a program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 print medium, if it is greater than 100 then print large.

//Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Number
// Description: Display string if matches given criteria
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small \n");
    }
    else if((iNo>=50)&&(iNo<100))
    {
        printf("Medium \n");
    }
    else
    {
        printf("Large \n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}