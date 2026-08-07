// factorial 
// input: 5
//output; 1*2*3*4*5=120

#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    unsigned long int iFact=1;
    int iCnt=0;

    iCnt=1;
    while(iCnt<=iNo)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    unsigned long int iRet=0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of %d is %lu",iValue,iRet);
    return 0;
}