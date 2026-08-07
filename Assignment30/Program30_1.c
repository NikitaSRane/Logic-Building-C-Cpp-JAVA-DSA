// Write a program which accepts 2 strings from user and concat N characters from second string after first string.
// Value of N should be accepted from user.

//Input:    "Marvellous Infosystems"
//          "Logic Building"
//          5
//Output:   "Marvellous Infosystems Logic"


#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: StrNCatX
// Description: concat N characters from second string after first string.
// Input: Character, Character, Integer
// Output: None
// Author: Nikita Sagar Rane
// Date:19/06/2024
//
///////////////////////////////////////////////

void StrNCatX(char *src, char *dest, int iNo)
{
    while(*src !='\0')
    {
        src++;
    }
    *src=' ';
    src++;

    int iCnt=1;

    while((*dest != '\0')&&(iCnt <=iNo))
    {
        *src=*dest;
        src++;
        dest++;
        iCnt++;
    }
    *src='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    int iValue=0;

    printf("Enter first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^'\n']s",Brr);

    printf("Enter number: \n");
    scanf("%d",&iValue);

    StrNCatX(Arr,Brr,iValue);

    printf("Updated string is: %s",Arr);

    return 0;
}