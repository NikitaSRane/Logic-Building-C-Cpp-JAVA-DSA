// Write a program which display ASCII table.Table contains symbol, decimal, Hexadecimal, and octal Representation of every member from 0 to 255.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: DisplayASCII
// Description: Display ASCII table
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt=0;

    char *str[34]={"NULL","START OF HEADING","START OF TEXT","END OF TEXT","END OF TRANSMISSION","ENQUIRY","ACKNOWLEDGE","BELL","BACKSPACE","HORIZONTAL TAB","LINE FEED","VERTICAL TAB","FORM FEED","CARRIAGE RETURN","SHIFT OUT","SHIFT IN","DATA LINK ESCAPE","DEVICE CONTROL 1","DEVICE CONTROL 2","DEVICE CONTROL 3","DEVICE CONTROL 4","NEGATIVE ACKNOWLEDGE","SYNCHRONOUS IDLE","END OF TRANS BLOCK","CANCEL","END OF MEDIUM","SUBSTITUTE","ESCAPE","FILE SEPARATOR","GROUP SEPARATOR","RECORD SEPARATOR","UNIT SEPARATOR","SPACE","NBSP"};
    printf("---------------------------------------------------------\n");
    printf("| Decimal | Octal      |Hexadecimal    | Symbol          |\n");
    printf("---------------------------------------------------------\n");

    for(iCnt=0;iCnt<=255;iCnt++)
    {
        if((iCnt>=0)&&(iCnt<=32))
        {

            printf("| %d       | %o          | %x             | %s            \n",iCnt,iCnt,iCnt,str[iCnt]);
    
        }
        if((iCnt>=33)&&(iCnt<=126))
        {
            printf("| %d       | %o         | %x             | %c            \n",iCnt,iCnt,iCnt,iCnt);
        }
        if((iCnt>=128)&&(iCnt<=254))
        {
            printf("| %d       | %o         | %x             | %c            \n",iCnt,iCnt,iCnt,iCnt);
        }
        if(iCnt==127)
        {
            printf("| %d       | %o         | %x             | %s          \n",iCnt,iCnt,iCnt,"DEL");
        }
        if(iCnt==255)
        {
            printf("| %d       | %o         | %x             | %s         \n",iCnt,iCnt,iCnt,str[33]); // Non breaking space
        }

    }
    printf("----------------------------------------------------\n");

}

int main()
{
    DisplayASCII();
}