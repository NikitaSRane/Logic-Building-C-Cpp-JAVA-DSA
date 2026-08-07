// Write a program which accept one number and range of positions from user and Toggle all bits from that range.
// Input  897   9   13
// Output  7297 

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ToggleBit
// Description: Toggle all bits from that range and return modified number
// Input: Integer, Integer, Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:26/06/2024
//
///////////////////////////////////////////////


unsigned int ToggleBit(unsigned int iNo, int iStart, int iEnd)
{
    unsigned int iResult=0, iSum=0;
    unsigned int iMask=0X00000000;
    int iCnt=0;
    unsigned int Power1=1, Power2=1;

    for(iCnt=1;iCnt<=(iStart-1); iCnt++)
    {
        Power1=Power1*2;
    }
    //printf("%u\n",Power1);

    Power2=Power1;
    iSum=Power2;

    for(iCnt=iStart;iCnt<=(iEnd-1); iCnt++)
    {
        Power2=Power2*2;
        iSum=iSum+Power2;
    }
    //printf("%u\n",Power2);

    iMask=iSum;
    //printf("%u\n",iMask);
    
    iResult= iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue=0, iRet=0;
    int iPos1=0, iPos2=0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter position: \n");
    scanf("%d",&iPos1);

    printf("Enter position: \n");
    scanf("%d",&iPos2);

    iRet=ToggleBit(iValue,iPos1,iPos2);

    printf("Modified number is: %u",iRet);

    return 0;
}