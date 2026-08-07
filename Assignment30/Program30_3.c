// Write a program which accepts two strings from user and check whether first N contents of two strings are equal or not?

//Input:    "Marvellous Infosystems"
//          "Marvellous Pune"
//          10
//Output:   True

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: StrNCmpX
// Description:Check whether first N contents of two strings are equal or not
// Input: Character,Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////


bool StrNCmpX(char *src,char *dest, int iNo)
{
    int iCnt=0;

    while((*src != '\0')&&(*dest !='\0')&&(iCnt < iNo))
    {
        if( *src != *dest)
        {
            break;
        }
        src++;
        dest++;
        iCnt++;
    }
    if(iCnt == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    int iValue=0;
    bool bRet=false;

    printf("Enter first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^'\n']s",Brr);

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=StrNCmpX(Arr,Brr,iValue);

    if(bRet == true)
    {
        printf("Both strings are equal.");
    }
    else
    {
        printf("Both strings are not equal.");  
    }
    
    return 0;
}