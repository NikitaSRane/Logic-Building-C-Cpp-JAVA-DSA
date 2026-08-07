#include<stdio.h>

int CountVowel(char *str)
{
    int iCnt=0;
    while( *str != '\0')
    {

        if(((*str =='A')||(*str =='a' ))||((*str =='E')||(*str =='e' ))||((*str =='I')||(*str =='i' ))||((*str =='O')||(*str =='o' ))||((*str =='U')||(*str =='u')))
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

    iRet=CountVowel(arr);
    printf("Number of vowel letters are: %d",iRet);

    return 0;
}