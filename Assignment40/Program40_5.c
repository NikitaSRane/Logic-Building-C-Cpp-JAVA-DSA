// Write a program which accept one number from user and toggle contents of first and last nibble of the number . Return modified number 
// Nibble is group of four digits

// Input: 10
// Output: 0Xf0000005  i.e 4026531845

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ToggleBit
// Description:Toggle the given position and return modified number 
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:26/06/2024
//
///////////////////////////////////////////////

unsigned int ToggleBit(unsigned int iNo)
{
    unsigned int iMask=0XF000000F, Result=0;

    Result=iNo ^ iMask;
    
    return Result;

}

int main()
{
    unsigned int iValue=0,iRet=0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet=ToggleBit(iValue);

    printf("Modified number is in hexadecimal format: 0X%x",iRet);


    return 0;
}