#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask=8;
    int Result=0;
    Result=iNo & iMask;

    if(Result == iMask)
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
    unsigned int iNo1=0; 
    bool bRet=false;

    printf("Enter number: ");
    scanf("%u",&iNo1);

    bRet=CheckBit(iNo1);

    if(bRet == true)
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