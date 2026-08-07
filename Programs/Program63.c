#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iDigits=0;
    int iSum=0;

    if(iNo < 0) // updator
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo % 10;
        if(iDigits % 2==0)
        {
            iSum=iSum+iDigits;
        }
        iNo=iNo / 10;
        
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=SumEvenDigits(iValue);
    printf("Addition of Even digits are: %d ",iRet);
    return 0;
}