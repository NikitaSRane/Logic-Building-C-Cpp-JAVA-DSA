// Write a program which accept string from user and return length of largest word

//  Input:  "Marvellous Multi OS"
//  Output: 10

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: Maximum
// Description: return length of largest word
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:07/07/2024
//
///////////////////////////////////////////////


int Maximum(int *Arr,int size)
{
    int iMax=Arr[0];
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i] >iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
}

///////////////////////////////////////////////
//
// Function Name: WordCount
// Description: Count number of words
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date:07/07/2024
//
///////////////////////////////////////////////

void WordCount(char *Str)
{
    int iCount=0, iValue=0;
    bool bFlag=false;
    int iCnt=0,i=0, Max=0;
    int Arr[30];
    while(*Str != '\0')
    {
        if(*Str == ' ' || * Str == '\t')
        {
            bFlag=false;
            iCount=0; 
        }
        else
        {   
            if(bFlag == false)
            {
                iCnt++;
                bFlag=true;
                iCount=1;
            }
            else if(bFlag== true)
            {
                iCount++;
            }
            Arr[iCnt-1]=iCount;
        }
        Str++;
    }
    printf("Number of words are: %d\n",iCnt);
    printf("Length of words are:\n");
    for(int j=0; j<iCnt;j++)
    {
        printf("%d\n",Arr[j]);
    }
    printf("\n");
    Max=Maximum(Arr,iCnt);
    printf("Maximum length is: %d",Max);
}

int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    WordCount(Arr);

    return 0;
}