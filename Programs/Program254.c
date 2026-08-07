#include<stdio.h>

void struprX(char *str)
{

    while( *str != '\0')
    {
        if(((*str)>='a')&&((*str)<='z'))
        {
            (*str)=(*str)-32;

        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Entered string is: %s ",Arr);

    return 0;
}