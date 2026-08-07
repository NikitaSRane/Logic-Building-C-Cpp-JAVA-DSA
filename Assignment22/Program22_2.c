// Accept N numbers from user and return the smallest number.
// Input: N:    6
//        Elements: 15  66  3   80  90    66
// Output: 3

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Minimum
// Description:Return smallest number.
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 29/05/2024
//
///////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{   
    int iCnt=0, iMin=Arr[0];
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }
        
    }
    return iMin;
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

    iRet=Minimum(p,iSize);

    printf("Smallest number is %d",iRet);

    free(p);

    return 0;
}