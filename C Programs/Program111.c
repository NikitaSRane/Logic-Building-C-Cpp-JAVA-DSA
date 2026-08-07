#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo*2);iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
        
    }

}

int main()
{
    Display(7);
    return 0;
}