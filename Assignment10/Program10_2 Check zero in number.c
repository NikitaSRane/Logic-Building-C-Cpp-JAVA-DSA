// Write a program which accept number from user and check whether it contains o in  it or not.


#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CheckZero
// Description: Check zero in number.
// Input: Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
    int iDigit=0;

    if(iNo <0)
    {
        iNo=-iNo;
    }

    while(iNo !=0 )
    {
        iDigit=iNo % 10;
        iNo=iNo / 10;

        if(iDigit == 0)
        {
            return true;
        }
    }

}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero.\n");
    }
    else
    {
        printf("It does not contain zero.\n");
    }

    return 0;
}