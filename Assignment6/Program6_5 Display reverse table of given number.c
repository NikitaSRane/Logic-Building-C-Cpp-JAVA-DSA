// Write a program which accept number from user and display its table in reverse order.

// Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: TableRev
// Description: Display reverse table of given number.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt=0;

    if(iNo<0) // updater
    {
        iNo=-iNo;
    }
    if(iNo==0) // filter
    {
        return;
    }

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iNo*iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}