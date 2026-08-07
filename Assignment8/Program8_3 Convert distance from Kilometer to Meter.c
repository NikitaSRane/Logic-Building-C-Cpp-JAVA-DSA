// Write a program which accept distance in kilometre and convert it into meter.
//1 Kilometer= 1000 Meter

//Time complexit- O(N)

#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function Name: KMtoMeter
// Description: Convert distance from Kilometer to Meter.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
//////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter=0;
    iMeter=iNo*1000;

    return iMeter;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter distance in kilometer: ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in Meter is %d",iRet);

    return 0;
}