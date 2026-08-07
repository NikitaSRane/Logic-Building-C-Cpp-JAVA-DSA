// Accept number of rows and number of columns from user and display below pattern.
// Input: iRow=4    iCol=4
// Output: 

/*  
    A   B   C   D
    a   b   c   d    
    A   B   C   D
    a   b   c   d
*/

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display Pattern
// Input: Integer,Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
///////////////////////////////////////////////

void Pattern(int iRows, int iCols)
{
    int iCnt1=0, iCnt2=0;
    char cValue1='\0', cValue2='\0';

    for(iCnt1=1;iCnt1<=iRows;iCnt1++)
    {
        for(iCnt2=1,cValue1='a',cValue2='A';iCnt2<=iCols;iCnt2++,cValue1++,cValue2++)
        {
            if(iCnt1 % 2 == 0)
            {
                printf("%c\t",cValue1);
            }
            else
            {
                printf("%c\t",cValue2);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}