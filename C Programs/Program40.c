#include<stdio.h>
#include<stdbool.h>

/*
    START
        Accept a number form user as No.\
        Search all factors of that No.
        Perform addition of all factors\
        if addition is equal to No
        thern display no is perfect number
        otherwise display no is not perfect number

    STOP
*/

bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0) //filter
    {
        printf("Please enter positive numbers only. \n");
        false;
    }

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }

    if(iSum==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number.\n",iValue);
    }
    else
    {
        printf("%d is not perfect number.\n",iValue);
    }

    return 0;
}