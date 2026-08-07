#include<stdio.h>
#include<stdbool.h>


bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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