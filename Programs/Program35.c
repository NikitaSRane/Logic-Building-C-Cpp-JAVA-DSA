
#include<stdio.h>

//Time complexity: O(N)

void DisplayFactors(int iNo)
{
    int iCnt=0;


    printf("Factors of %d are:  ",iNo);
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        
    }

}

int main()
{
    int iValue;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}