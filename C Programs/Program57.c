#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigits=0;
    int iCount=0;

    if(iNo < 0) // updator
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo % 10;
        iNo=iNo / 10;
        if((iDigits % 2)==0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);
    printf("Even Number of digits are: %d ",iRet);
    return 0;
}