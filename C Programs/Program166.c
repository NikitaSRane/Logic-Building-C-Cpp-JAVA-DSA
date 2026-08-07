#include<stdio.h>

int strlenCap(char *str)
{
    int iCnt=0;
    while( *str != '\0')
    {

        if((*str >=65 )&&(*str <=90 ))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet=strlenCap(arr);
    printf("Capital letters are: %d",iRet);

    return 0;
}