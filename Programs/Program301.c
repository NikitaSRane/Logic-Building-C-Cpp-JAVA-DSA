#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iMask=8;
    unsigned int Result=0;

    printf("Enter number: ");
    scanf("%u",&iNo1);

    Result=iNo1 & iMask;

    if(Result == iMask)
    {
        printf("4th bit is On \n");
    }
    else
    {
        printf("4th bit is Off \n");       
    }
    return 0;
}


/*
    

    OP1         Op2         &           |           ~

    0           0           0           0           0
    
    1           0           1           1           1
    
    0           1           1           1           1
    
    1           1           1           1           0



*/