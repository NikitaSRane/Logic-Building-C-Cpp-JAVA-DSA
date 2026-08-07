//Write a program which accept number from user and display its factors in decreasing order.

// Time Complexity- O(N/2)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: FactRev
// Description: Display factors in decreasing order
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt=0;
    int i=0;
    int j=0;

    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return 0 ;
}