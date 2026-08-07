#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char *str, char ch)
{
    int iCnt=0;

    while( *str != '\0')
    {
        if(*str == ch )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[100];
    char cValue='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character which you want to search: \n");
    scanf(" %c",&cValue);

    iRet=CountFrequency(arr,cValue);
    printf("Number of characters are: %d",iRet);

    return 0;
}