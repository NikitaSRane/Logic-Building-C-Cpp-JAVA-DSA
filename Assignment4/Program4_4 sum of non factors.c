//Write a program which accept number from user and return summation of all its non factors.

//Time Complexity- O(N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: SumNonFact
// Description: Display sum of all non-factors of number.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum=iSum+iCnt;
        }
    } 
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("Summation of non factors is %d.",iRet);

    return 0;
}