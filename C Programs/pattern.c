#include<stdio.h>

void DisplayPattern(int iValue)
{
    int i=0, j=0;

    for(i=0; i< iValue ; i++)
    {
            for(j=0;j< iValue; j++)
            {
                printf("*\t");
            }
            printf("\n");
            iValue=iValue-2;
    }
}

int main()
{
    int iNo=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);
    return 0;
}