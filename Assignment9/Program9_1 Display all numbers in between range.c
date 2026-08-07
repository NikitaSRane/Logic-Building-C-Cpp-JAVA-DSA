// Write a program which accept range from user and display all numbers in between that range.


#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: RangeDisplay
// Description: Display all numbers in between range
// Input: Integer,Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////

void RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0;

    if(iNo2<iNo1)
    {
        printf("Invalid range.");
    }

    for(iCnt=iNo1; iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}