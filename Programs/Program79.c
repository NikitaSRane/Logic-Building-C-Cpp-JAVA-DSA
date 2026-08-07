// Input:5
// Output:1 * 1 2 * 2 3 * 3 4  * 4 5 * 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1=0;

    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        printf("%d\t*\t%d\t",iCnt1,iCnt1);

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