// Accept two numbers from user and display first number in second number of times.

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display frequency of number
// Input: Integer, Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display(int iNo, int ifrequency)
{
    int iCnt=0;

    if(ifrequency<0) // updater
    {
        ifrequency=-ifrequency;
    }

    for(iCnt=1;iCnt<=ifrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}