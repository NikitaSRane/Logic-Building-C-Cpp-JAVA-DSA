// user-defined strlen()

#include<stdio.h>

int StrLenX(char *str)
{
    int iCount=0;

    while( *str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet=StrLenX(arr);
    printf("Length of string is %d",iRet);

    return 0;
}