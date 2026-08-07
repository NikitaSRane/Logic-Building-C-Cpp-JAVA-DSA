#include<stdio.h>

void Display(char *str)
{

    while( *str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }

}

int main()
{
    char arr[100];
    char cValue='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    Display(arr);

    return 0;
}