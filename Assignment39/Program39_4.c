// Write a program which accept one number and two positions from user and check whether bit at first position  or bit at second positision is ON or OFF. If bit is 1 then return true otherwise return false.
// Input  10 3 7
// Output True  


#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckBit
// Description: Check whether bit is on or off.
// Input: Integer, Integer,Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date:25/06/2024
//
///////////////////////////////////////////////


bool CheckBit(unsigned int iNo, int iFirst, int iSecond)
{
    unsigned int iResult1=0, iResult2=0;
    unsigned int iMask1=0, iMask2=0;

    int iCnt=0;
    unsigned int Power=1;

    for(iCnt=1;iCnt<=(iFirst-1); iCnt++)
    {
        Power=Power*2;
    }
    iMask1=Power;
    //printf("%d",iMask1);

    Power=1;

    for(iCnt=1;iCnt<=(iSecond-1); iCnt++)
    {
        Power=Power*2;
    }
    iMask2=Power;
    //printf("%d",iMask2);
    
    iResult1= iNo & iMask1;

    iResult2= iNo & iMask2;

    if((iResult1 == iMask1)||(iResult2 == iMask2))
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
    int iFPos=0, iSPos=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter first position: \n");
    scanf("%d",&iFPos);

    printf("Enter second position: \n");
    scanf("%d",&iSPos);

    bRet=CheckBit(iValue,iFPos,iSPos);

    if(bRet == true)
    {
        printf("%d or %d bit is ON",iFPos,iSPos);
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}