#include<stdio.h>
#include<stdbool.h>


bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        printf("It is small value\n");
    }
    else
    {
        printf("It is not small value\n");
    }
}

int main()
{

    char cValue;

    printf("Enter one character:\n");
    scanf("%c",&cValue);
    CheckSmall(cValue);


    return 0;
}