#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    int iCnt=0;
    bool bFlag=false;
    while( *str != '\0')
    {

        if(*str ==ch )
        {
            bFlag=true;
            break;

        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[100];
    char cValue='\0';
    bool bRet=false;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character which you want to search: \n");
    scanf("%c",&cValue);

    bRet=Check(arr,cValue);
   
    if(bRet == true)
    {
        printf("Character is Present\n");
    }
    else{
        printf("Character is Not present\n");
    }

    return 0;
}