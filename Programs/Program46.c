// factorial 
// input: 5
//output; 1*2*3*4*5=120

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact=1;
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of %d is %d",iValue,iRet);
    return 0;
}