// Write a program which accept string from user and replace each occurence of first character of each word into capital case.
// Input:    "marvellous infoSystems By Piysh khairnar"
// Output:  "Marvellous InfoSystems By Piysh Khairnar"

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: StrCap
// Description: Replace each occurence of first character of each word into capital case.
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date:09/07/2024
//
///////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h> 

void StrCap(char *Src)
{
    bool bFlag=false;

    while(*Src != '\0')
    {
        if(*Src == ' '|| *Src == '\t')
        {
            bFlag=false;
        }
        else if(bFlag == false)
        {
            
            bFlag=true;

            if( *Src >='a' && *Src <='z')
            {
                *Src=*Src-32;
            }
             
        }
        Src++;
    }

}

int main()
{
    char Arr[30];
    
    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);
  
    StrCap(Arr);

    printf("Updated string is %s",Arr);
    return 0;
}