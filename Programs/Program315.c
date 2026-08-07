#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iMask=0Xfffffdff;
    unsigned int Result=0;

    printf("Enter number: ");
    scanf("%u",&iNo1);

    Result=iNo1 & iMask;

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

10 bit off

Decimal         1 1 1 1    1 1 1 1    1 1 1 1    1 1 1 1    1 1 1 1    1 1 0 1    1 1 1 1    1 1 1 1

                f          f          f          f          f          D          f          f

Hexadecimal     0XfffffDff



*/

