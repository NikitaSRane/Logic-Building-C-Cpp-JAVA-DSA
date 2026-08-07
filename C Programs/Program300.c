#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iNo2=0, iRet=0;

    printf("Enter first number: ");
    scanf("%u",&iNo1);

    printf("Enter second number: ");
    scanf("%u",&iNo2);

    iRet= iNo1 ^ iNo2;
    printf("Result of bitwise X-OR is %u \n:",iRet);

    return 0;
}


/*
    Bitwise X-or (^)

    OP1         Op2         Result

    0           0           0

    1           0           1

    0           1           1

    1           1           0




        iNo1= 11=  0 0 0 0 1 0 1 1
|
        iNo2= 15=  0 0 0 0 1 1 1 1

--------------------------------------------
                   0 0 0 0 0 1 0 0

             Result=  4



*/
