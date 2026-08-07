// Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is 1 then return true otherwise return false.
// Input  10 2
// Output True  


#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckBit
// Description: Check whether bit is on or off.
// Input: Integer, Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date:24/06/2024
//
///////////////////////////////////////////////


bool CheckBit(unsigned int iNo, int ibit)
{
    unsigned int iResult=0;
    unsigned int iMask=0;
    int iCnt=0;
    unsigned int Power=1;

    for(iCnt=1;iCnt<=(ibit-1); iCnt++)
    {
        Power=Power*2;
    }
    iMask=Power;
    
    iResult= iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue=0;
    int iPos=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter position: \n");
    scanf("%d",&iPos);

    bRet=CheckBit(iValue,iPos);

    if(bRet == true)
    {
        printf("%d bit is ON",iPos);
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}