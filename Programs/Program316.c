#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iMask=0X00000008;
    unsigned int Result=0;

    printf("Enter number: ");
    scanf("%u",&iNo1);

    Result=iNo1 ^ iMask;

    printf("Updated number is: %u",Result);

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


bit position= 4 toggle
1)

21              0 0 0 1 0 1 0 1  
29              0 0 0 1 1 1 0 1 after toggle output



iNO= 21         0 0 0 1 0 1 0 1

            ^
 mask           0 0 0 0 1 0 0 0
---------------------------------------------
                0 0 0 1 1 1 0 1   =result= 29


2)

12              0 0 0 0 1 1 0 0
 4              0 0 0 0 0 1 0 0  after toggle output


 iNO= 12        0 0 0 0 1 1 0 0
            ^
 mask           0 0 0 0 1 0 0 0
 -----------------------------------
 Result         0 0 0 0 0 1 0 0



3)

 iNo=4           0 0 0 0 0 1 0 0
            ^
 Mask            0 0 0 0 1 0 0 0

 ---------------------------------------
 Result          0 0 0 0 1 1 0 0



Decimal         0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    0 0 0 0    1 0 0 0

                0          0          0          0          0          0          0          8

Hexadecimal     0X00000008



*/