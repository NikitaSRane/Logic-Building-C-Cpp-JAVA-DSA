// Input:5
// Output: & & & & & 
//         * * * * * 
//         $ $ $ $ $

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1=0;

    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        printf("&\t"); 
    }
    printf("\n");

    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        printf("*\t");
    }
    printf("\n");
    
    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        printf("$\t");
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}   