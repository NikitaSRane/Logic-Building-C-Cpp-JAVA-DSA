#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iPower=1;

    while(iNo2 > 0)
    {
        iPower=iPower*iNo1;
        iNo2--;
    }
    return iPower;

}

int main()
{
    int x=0, y=0, iRet=0;

    printf("Enter number: \n");
    scanf("%d",&x);

    printf("Enter number :\n");
    scanf("%d",&y);

    iRet=Power(x,y);
    printf("Power of number is: %d",iRet);

    return 0;

}