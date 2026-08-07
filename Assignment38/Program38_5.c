// Write a program which accept one number from user and ON its first 4 bits. Returned modified number.

//Input: 73
//Output: 79

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: OnBit
// Description: Return the modified number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 22/06/2024
//
///////////////////////////////////////////////

unsigned int OnBit(int iNo)
{
    unsigned int iMask=0X0000000F;
    unsigned int iResult=0;

    iResult=iNo | iMask;

    return iResult;
}

int main()
{
    unsigned int iValue=0, iRet=0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet=OnBit(iValue);
    printf("Modified number is %u",iRet);
    
    return 0;
}

/*
bit position= first 4 bits


iValue= 73      0 1 0 0 1 0 0 1
            |
Mask            0 0 0 0 1 1 1 1

--------------------------------------
Result          0 1 0 0 1 1 1 1


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

Mask            0 0 0 0 1 1 1 1

 32 bit         0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    1 1 1 1 

                0           0           0           0       0           0           0           15

                0           0           0           0       0           0           0           F

 hexadecimal  0X0000000F






*/