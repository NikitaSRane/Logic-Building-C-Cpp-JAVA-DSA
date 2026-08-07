// Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

//Input: 11
//Output: 3

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountOne
// Description: Return number of ON digits.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:22/06/2024
//
///////////////////////////////////////////////

int CountOne(unsigned int iValue)
{
    unsigned int iResult=0;
    int iCount=0;

    while(iValue != 0)
    {
        iResult= iValue & 1;
        if(iResult == 1)
        {
            iCount++;
        }
        iValue= iValue >> 1;
    }
    return iCount;
}

int main()
{
    unsigned int iNo=0;
    int iRet=0;

    printf("Enter Number: \n");
    scanf("%u",&iNo);

    iRet=CountOne(iNo);
    printf("Number of 1 bits are: %d",iRet);

    return 0;
}

/*
iNo= 11  1011

11 & 1=   1011 & 0001 = 0001 =1

iNo=11>>1 = 0101 =5

iNo=5

5 & 1 =  0101 & 0001 = 0001 = 1

iNo=5 >> 1= 0010 = 2

iNo=2

2 & 1 =  0010 & 0001 =0000 = 0

iNo= 2 >> 1 = 0001 =1

iNo=1

1&1 =  0001 & 0001=0001 = 1

iNo= 1 >> 1 = 0000 = 0


binary number is: 1011







*/