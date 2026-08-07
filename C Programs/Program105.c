/*
    iRow=4
    iCol=4

    & @ @ @
    # & @ @
    # # & @
    # # # &
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i=0, j=0;

    if(iRow != iCol) // filter
    {
        printf("Number of rows and number of columns should be same \n");
        return;
    }

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i== j)) //diagonal
            {
                printf("&\t");
            }
            else if(i>j) //lower traingle
            {
                printf(" #\t");
            }
            else // upper traingle
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,ivalue2=0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&ivalue2);

    Display(iValue1,ivalue2);
    return 0;
}   