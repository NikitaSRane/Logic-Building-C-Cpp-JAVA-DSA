// Write a program which accept number from user and return difference between summation of all its factors and non factors.

// Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: FactDiff
// Description: Display difference between summation of all its factors and non factors
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSum1=0;
    int iSum2=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo% iCnt == 0)
        {
            iSum1=iSum1+iCnt;
        }

        if(iNo % iCnt != 0)
        {
            iSum2=iSum2+iCnt;
        }
    } 
    return iSum1-iSum2;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Difference in summation of non factors and factors is %d.",iRet);

    return 0;
}