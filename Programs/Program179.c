#include<stdio.h>

void updateString(char *str)
{

    while( *str != '\0')
    {

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

    updateString(arr);
    printf("Updated string is: %s",arr);

    return 0;
}