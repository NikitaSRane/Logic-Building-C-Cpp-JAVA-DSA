// write a program which checks 5th and 18th bits are ON or OFF.

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
    unsigned int iMask=0X00020010;
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
        printf("5th and 18th bits are ON \n");
    }
    else
    {
        printf("Bits are OFF \n");
    }
    return 0;
}

/*
Hexadecimal format

Decimal     Binary      Hexadecimal
0           0000        0
1           0001        1
2           0010        2
3           0011        3
4           0100        4
5           0101        5
6           0110        6
7           0111        7
8           1000        8
9           1001        9
10          1010        A
11          1011        B
12          1100        C
13          1101        D
14          1110        E
15          1111        F


Decimal         0 0 0 0    0 0 0 0    0 0 0 0    0 0 1 0    0 0 0 0    0 0 0 0    0 0 0 1    0 0 0 0

                0          0          0          2          0          0          1          0

Hexadecimal     0X00020010

*/