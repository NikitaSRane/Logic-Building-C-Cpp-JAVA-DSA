#include<stdio.h>


void CheckCapital(char ch)
{
    if((ch>=65)&&(ch<=90))
    {
        printf("It is capital value\n");
    }
    else
    {
        printf("It is not capital value\n");
    }
}

int main()
{

    char cValue;

    printf("Enter one character:\n");
    scanf("%c",&cValue);
    CheckCapital(cValue);


    return 0;
}