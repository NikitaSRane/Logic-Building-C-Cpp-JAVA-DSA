//problem Statement: Accept the age from user and display the ticket price.


#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name: CalculateTicket
//  Description: Used to display ticket price based on age
//  Input: Integer
//  Output: Integer
//  Author: Nikita Sagar Rane
//  Date: 29/04/2024
//
/////////////////////////////////////////////////////////////////////////


int CalculateTicket(int iValue)
{
    if((iValue>=0)&&(iValue<=4))
    {
        return 0;
    }
    else if((iValue>4)&&(iValue<=10))
    {
        return 900;
    }
    else if((iValue>10)&&(iValue<=50))
    {
        return 2000;
    }
    else if(iValue>50)
    {
        return 500;
    }
}

int main()
{
    int iAge=0;
    int iRet=0;

    printf("Enter age: ");
    scanf("%d",&iAge);

    iRet=CalculateTicket(iAge);

    printf("Your ticket price is :%d \n",iRet);
    return 0;
}