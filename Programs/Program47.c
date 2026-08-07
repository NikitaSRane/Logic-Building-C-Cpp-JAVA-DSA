// factorial 
// input: 5
//output; 1*2*3*4*5=120

#include<stdio.h>

long int Factorial(int iNo)
{
    long int iFact=1;
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
    long int iRet=0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of %d is %ld",iValue,iRet);
    return 0;
}