// Write a program which accept one number and position from user and on that bit. Return modified number 

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: OnBit
// Description:On the given position and return modified number 
// Input: Integer, Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:26/06/2024
//
///////////////////////////////////////////////

unsigned int OnBit(unsigned int iNo, int ibit)
{
    unsigned int iMask=0, Result=0;
    int Power=1;
    int iCnt=0;

    for(iCnt=1;iCnt <=(ibit-1); iCnt++)
    {
        Power=Power*2;
    }
    iMask=iNo+Power;

    Result=iNo | iMask;
    
    return Result;

}

int main()
{
    unsigned int iValue=0,iRet=0;
    int iPos=0; 

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter position: \n");
    scanf("%d",&iPos);

    iRet=OnBit(iValue,iPos);

    printf("Modified number is: %u",iRet);


    return 0;
}