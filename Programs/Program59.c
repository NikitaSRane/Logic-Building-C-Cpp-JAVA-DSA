#include<stdio.h>

void DisplayOddDigits(int iNo)
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
        if((iDigits % 2)!=0)
        {
            printf("%d \n",iDigits);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayOddDigits(iValue);

    return 0;
}