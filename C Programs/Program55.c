#include<stdio.h>

int CountDigits(int iNo)
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
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);
    printf("Number of digits are: %d ",iRet);
    return 0;
}