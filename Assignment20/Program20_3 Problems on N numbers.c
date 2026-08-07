// Accept N numbers from user and check whether that numbers contains 11 in it or not.
// Input: N:    6
//        Elements: 85  66  11   80  93    88
// Output: 11 is Present.



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: Check
// Description: Check whether 11 is present or not.
// Input: Integer,Integer
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{   
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]== 11)
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
    int iSize=0,iCnt=0;
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

    bRet=Check(p,iSize);
    if(bRet==true)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is not present.\n");

    }
    free(p);

    return 0;
}