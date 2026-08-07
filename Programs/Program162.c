#include<stdio.h>

int strlenX(char *str)
{
    int iCount=0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{

    char Arr[50];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenX(Arr); // Display(100);
    printf("Length of string is %d",iRet);

    return 0;
}