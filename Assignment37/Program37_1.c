// write a program which checks 15th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckBit
// Description: Check whether bit is on or off
// Input: Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date:21/06/2024
//
///////////////////////////////////////////////


bool CheckBit(unsigned int iNo)
{
    unsigned int iMask=16384;
    unsigned int Result=0;


    Result=iNo & iMask;

    if(iMask == Result)
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
    unsigned int iValue=0, iRet=0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet=CheckBit(iValue);

    if(iRet == true)
    {
        printf("15th bit is ON \n");
    }
    else
    {
        printf("15th bit is OFF \n");
    }
    return 0;
}

/*

----------------------------------------------
1)
iNo=11      000000000001011
        &
iMask       100000000000000    = 18384
----------------------------------------------
            000000000000000    =  Result=0

1)
iNo=16500       100000001110100
            &
iMask           100000000000000    = 18384
----------------------------------------------
                100000000000000    =  Result=18384

*/