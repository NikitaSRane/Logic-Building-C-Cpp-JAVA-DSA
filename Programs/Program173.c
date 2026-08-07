#include<stdio.h>
#include<stdbool.h>

bool Check(char *str)
{
    int iCnt=0;
    bool bFlag=false;
    while( *str != '\0')
    {

        if(*str =='l')
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
    bool bRet=false;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    bRet=Check(arr);
   
    if(bRet == true)
    {
        printf("l is Present\n");
    }
    else{
        printf("l is Not present\n");
    }

    return 0;
}