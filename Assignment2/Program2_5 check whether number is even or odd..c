// Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
//
// Function Name: CheckEven
// Description: Display Even or odd number.s
// Input: Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet ==  true)
    {
        printf("%d is even number.\n",iValue);
    }
    else
    {
        printf("%d is odd number.\n",iValue);
    }

    return 0;
}