// Write a program which accept one number and position from user and off that bit. Return modified number 

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: OffBit
// Description:Off the given position and return modified number 
// Input: Integer, Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:26/06/2024
//
///////////////////////////////////////////////

unsigned int OffBit(unsigned int iNo, int ibit)
{
    unsigned int iMask=0XFFFFFFFF, Result=0;
    int Power=1;
    int iCnt=0;

    for(iCnt=1;iCnt <=(ibit-1); iCnt++)
    {
        Power=Power*2;
    }
    iMask=iMask-Power;

    Result=iNo & iMask;
    
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

    iRet=OffBit(iValue,iPos);

    printf("Modified number is: %u",iRet);


    return 0;
}