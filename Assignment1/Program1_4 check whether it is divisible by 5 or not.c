// Accept one number and check whether it is divisible by 5 or not.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
//
// Function Name: Check
// Description: Display no divisible by 5 or not.
// Input: Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

bool Check(int iNo)
{
   if(iNo % 5 == 0)
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

    bRet=Check(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5.\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5.\n",iValue);

    }
    return 0;
}