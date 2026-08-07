#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt=1;

    bool bFlag=false;
    while( *str != '\0')
    {
        if(*str ==ch )
        {
            bFlag=true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag==true)
    {
        return iCnt;
    }
    else
    {
        return -1;  
    }
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

    iRet=CheckOccurance(arr,cValue);

    if(iRet != -1)
    {
        printf("Index of character is %d",iRet);

    }
    else
    {
        printf("There is no such letter ");

    }

    return 0;
}