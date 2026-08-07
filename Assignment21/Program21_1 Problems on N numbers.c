// Accept N numbers from user and accept one another no as No, check whether that No is present or not.
// Input: N:    6
//        No:   66
//        Elements: 85  66  11   80  93    60
// Output: Present



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: Check
// Description:Check whether given number is present or not.
// Input: Integer,Integer,Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

bool Frequency(int Arr[], int iLength, int iNo)
{   
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]== iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iSize=0,iCnt=0, iValue=0;
    bool bRet=false;
    int *p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number which you want to search:\n");
    scanf("%d",&iValue);

    bRet=Frequency(p,iSize,iValue);

    if(bRet== true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }

    free(p);

    return 0;
}