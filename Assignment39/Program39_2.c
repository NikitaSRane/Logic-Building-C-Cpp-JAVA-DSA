// Write a program which accept two numbers from user and display position of common bits from that number.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountOne
// Description: Return number of ON digits.
// Input: Integer,Integer
// Output: None
// Author: Nikita Sagar Rane
// Date:22/06/2024
//
///////////////////////////////////////////////
void Reverse(int Arr[],int iSize)
{
    int iStart=0, iEnd=0,temp=0;

    iStart=0;
    iEnd=iSize-1;

    while(iStart < iEnd)
    {
        temp=Arr[iStart];
        Arr[iStart]=Arr[iEnd];
        Arr[iEnd]=temp;

        iStart++;
        iEnd--;
    }
}

void CountOne(unsigned int iValue1 ,unsigned int iValue2)
{
    unsigned int iResult1[32], iResult2[32];
    int iCnt=0, iCnt1=0, iCnt2=0;
    int iCount1=0,iCount2=0, iMax=0;

    while(iValue1 != 0)
    {
        iResult1[iCnt1]= iValue1 & 1;
        iCount1++;
        printf("%u",iResult1[iCnt1]);
        iValue1= iValue1 >> 1;
        iCnt1++;
    }
    
    Reverse(iResult1,iCount1);

    printf(" \n");
    while(iValue2 != 0)
    {
        iResult2[iCnt2]= iValue2 & 1;
        iCount2++;
        printf("%u",iResult2[iCnt2]);
        iValue2= iValue2 >> 1;
        iCnt2++;
    }
    Reverse(iResult2,iCount2);

    iMax=iCount1;
    if(iCount2 > iMax)
    {
        iMax=iCount2;
    }
    //printf("\n%d \n",iMax);

    for(iCnt=0;iCnt<iMax;iCnt++)
    {
        if((iResult1[iCnt]==1)&&(iResult2[iCnt]==1))
        {
            printf("%d\t",iMax-iCnt);
        }

    }

}


int main()
{
    unsigned int iNo1=0, iNo2=0;
    int iRet=0;

    printf("Enter first Number: \n");
    scanf("%u",&iNo1);

    printf("Enter second Number: \n");
    scanf("%u",&iNo2);

    CountOne(iNo1,iNo2);

    return 0;
}