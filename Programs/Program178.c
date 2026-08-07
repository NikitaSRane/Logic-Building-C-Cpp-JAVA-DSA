#include<stdio.h>
#include<stdbool.h>

int LastOccurance(char *str, char ch)
{
    int iCnt=1, iPos=-1;

    while( *str != '\0')
    {
        if(*str ==ch )
        {
            iPos=iCnt;            
        }
        iCnt++;
        str++;
    }
    return iPos;
    
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

    iRet=LastOccurance(arr,cValue);

    if(iRet != -1)
    {
        printf("last Index of character is %d",iRet);

    }
    else
    {
        printf("There is no such letter ");

    }

    return 0;
}