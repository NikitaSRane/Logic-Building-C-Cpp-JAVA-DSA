// Accept N numbers from user and accept range, return product of all odd elements
// Input: N:    6
//        Elements: 15  66  3   80  90    66
// Output: 45

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Product
// Description:Return product of all odd elements
// Input: Integer,Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

int Product(int Arr[], int iLength)
{   
    int iCnt=0, iMult=1, iproduct=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult=iMult*Arr[iCnt];
            iproduct=iMult;
        }
    }
    return iproduct;
}

int main()
{
    int iSize=0,iCnt=0, iValue1=0;
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

    iRet=Product(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}