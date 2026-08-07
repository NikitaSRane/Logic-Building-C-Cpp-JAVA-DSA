// Write a program which accept number from user and display its multiplication of factors.

// Time Complexity- O(N/2)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: MultFact
// Description: Display multiplication of factors of given number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////


int MultFact(int iNo)
{
    int iCnt=0;
    int iFact=1;

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact=iFact*iCnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("Multiplication of factors is %d.",iRet);

    return 0;
}