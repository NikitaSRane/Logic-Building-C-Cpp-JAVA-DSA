//Problem statement: Accept number from user and check whether this number divisible by 4 or not? (check factor of 4 or not?)

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo%4)==0)
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
    int iValue;
    bool bRet=false;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet=CheckDivisible(iValue);

    if(bRet==true)
    {
        printf("%d is divisible by 4 \n",iValue);
    }
    else
    {
        printf("%d is not divisible by 4 \n",iValue);
    }

    return 0;
}