// Accept number of rows and number of columns from user and display below pattern.
// Input: iRow=4    iCol=5
// Output: 

/*  
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display Pattern
// Input: Integer,Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 15/05/2024
//
///////////////////////////////////////////////

void Pattern(int iRows, int iCols)
{
    int iCnt1=0;
    int iCnt2=0;

    for(iCnt1=1;iCnt1<=iRows;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iCols*2;iCnt2++)
        {
            if(iCnt1 % 2 == 0)
            {
                printf("%d\t",iCnt2);
            }
            else
            {    
                printf("%d\t",iCnt2+1);
            }
            iCnt2++;
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