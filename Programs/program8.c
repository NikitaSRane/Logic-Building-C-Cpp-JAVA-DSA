// Problem Statment: Write the program to display no is even or odd
// user is going to enter only positive inputs.

#include<stdio.h>
#include<stdbool.h> // for explicite boolean datatype

//Alogirthm
/*
    START
        Accept one number from user as no
        Divide that no by 2
        if remainder is 0 
        then display the result as even number
        otherwise display the result as odd number

    STOP
*/

///////////////////////////////////////////////////////////////////////////////////
//
// Function name: CheckEvenOdd
// Description: Used to check whether the number is even or odd 
// Input: Integer
// Output:  Boolean
// Author: Nikita Sagar Rane
// Date: 16/04/2024
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// End of CheckEvenOdd function

//////////////////////////////////////////////////////////////////////////
//
//  Function name: Main function
//  Description:  Entry point function
/////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    if(bRet==true)
    {
        printf("%d is even number \n",iValue);
    }
    else
    {
        printf("%d is odd number \n",iValue);
    }
    
    return 0;
}

//End of main function