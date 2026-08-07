#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt=0;
    int iPower=1;

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iPower=iPower*iNo1;
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
    printf("Power of number is: %d ",iRet);

    return 0;

}