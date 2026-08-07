#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigits=0;

    if(iNo < 0) // updator
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo % 10;
        printf("%d \n",iDigits);
        iNo=iNo / 10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}