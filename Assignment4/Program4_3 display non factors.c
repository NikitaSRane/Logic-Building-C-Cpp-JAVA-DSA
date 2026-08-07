// Write a program which accept number from user and display all its non factors.

// Time Complexity- O(N)  

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: NonFact
// Description: Display all non-factors of number.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    } 
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}