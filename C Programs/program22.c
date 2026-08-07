#include<stdio.h>

void Display(int iValue)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("Jay Hanuman.....\n");
    }
}

int main()
{
    int iNo=0;
    printf("How many times you want to dispaly? \n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0;
}