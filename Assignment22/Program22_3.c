// Accept N numbers from user and return the difference between largest number and smallest number.
// Input: N:    6
//        Elements: 15  66  3   80  90    66
// Output:87 (90-3)

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Difference
// Description:Return differnce between largest number and smallest number.
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 29/05/2024
//
///////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{   
    int iCnt=0, iMin=Arr[0], iMax=Arr[0];
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax=Arr[iCnt];
        }
        
    }
    return iMax-iMin;
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

    iRet=Difference(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}