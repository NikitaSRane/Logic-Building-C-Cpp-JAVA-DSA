#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is: %s ",Arr);

    return 0;
}