// Input:5
// Output:5 4 3 2 1 0

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1=0;

    for(iCnt1=iNo;iCnt1>=0;iCnt1--)
    {
        printf("%d\t",iCnt1);
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