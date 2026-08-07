// Input:5
// Output:A B C D E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1=0;
    char ch='\0';

    for(iCnt1=1,ch='A';iCnt1<=iNo;iCnt1++,ch++)
    {
        printf("%c\t",ch);

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