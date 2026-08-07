// Write a program which accept range from user and return addition of all numbers in between that range.
//(Range should contains positive numbers only.)

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: RangeSum
// Description: Display addition of all numbers in given range
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

int RangeSum(int iNo1,int iNo2)
{
    int iCnt=0;
    int iSum=0;

    if((iNo2<iNo1)||(iNo1<0))
    {
        return -1; 
    }

    for(iCnt=iNo1; iCnt<=iNo2;iCnt++)
    {
        iSum=iSum+iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid range.");
    }
    else
    {
        printf("Addition is: %d",iRet);
    }

    return 0;
}