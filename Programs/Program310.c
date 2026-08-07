#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iMask=0X000001000;
    unsigned int Result=0;

    printf("Enter number: ");
    scanf("%u",&iNo1);

    Result=iNo1 & iMask;

    if(Result == iMask)
    {
        printf("13th bits are ON \n");
    }
    else
    {
        printf("Bits are OFF \n");       
    }
    return 0;
}


/*
    
Decimal     Binary      Hexadecimal

0           0000            0
1           0001            1
2           0010            2
3           0011            3
4           0100            4
5           0101            5
6           0110            6
7           0111            7
8           1000            8
9           1001            9
10          1010            A
11          1011            B
12          1100            C
13          1101            D
14          1110            E
15          1111            F


            0000    0000    0000    0000    0001    0000    0000    0000
            0       0       0         0     1       0        0    0    

            0X000001000

*/