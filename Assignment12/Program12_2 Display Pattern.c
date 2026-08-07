// Accept number from user and display below pattern.
// Input: 5
// Output: 5    #   4   #   3   #   2   #   1   #

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display Pattern
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
///////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
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