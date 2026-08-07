// Accept number from user and display below pattern.
// Input: 5
// Output: A    B   C   D   E

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display Pattern
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
///////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;
    char cValue='\0';

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1,cValue='A';iCnt<=iNo;iCnt++,cValue++)
    {
        printf("%c\t",cValue);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}