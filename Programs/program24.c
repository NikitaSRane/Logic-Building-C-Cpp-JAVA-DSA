#include<stdio.h>

void Display(int iValue)
{
    int iCnt=0;
    iCnt=1;                                 //1
    while(iCnt<=iValue)                     //2
    {
        printf("Jay Hanuman.....\n");       //4
        iCnt++;                             //3
    }
}

int main()
{
    int iNo=0;
    printf("Enter the number of times you want to display Jay Hanuman? \n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0;
}