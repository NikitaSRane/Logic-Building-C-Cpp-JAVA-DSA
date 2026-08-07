// Write a program which accept one number and check whether 9th or 12th bit is on or off.
// Input  257
// Output True  


#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckBit
// Description: check whether 9th or 12th bit is on or off.
// Input: Integer, Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date:25/06/2024
//
///////////////////////////////////////////////


bool CheckBit(unsigned int iNo)
{
    unsigned int iResult9=0, iResult12=0;
    unsigned int iMask9=0X00000100, iMask12=0X00000800;

 
    iResult9= iNo & iMask9;

    iResult12=iNo & iMask12;

    if((iResult9 == iMask9)||(iResult12 == iMask12))
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
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    bRet=CheckBit(iValue);

    if(bRet == true)
    {
        printf("9th or 12th bit is ON");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}