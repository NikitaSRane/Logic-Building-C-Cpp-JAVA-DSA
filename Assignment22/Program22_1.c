// Accept N numbers from user and return the largest number.
// Input: N:    6
//        Elements: 15  66  3   80  90    66
// Output: 90

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Maximum
// Description:Return largest number.
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 29/05/2024
//
///////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{   
    int iCnt=0, iMax=Arr[0];
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax=Arr[iCnt];
        }
        
    }
    return iMax;
}

int main()
{
    int iSize=0,iCnt=0;
    int iRet=0;
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

    iRet=Maximum(p,iSize);

    printf("Largest number is %d",iRet);

    free(p);

    return 0;
}