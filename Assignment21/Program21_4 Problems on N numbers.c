// Accept N numbers from user and accept range, display all elements from that range
// Input: N:    6
//        Start:   60
//        End:     90
//        Elements: 85  66  11   80  93    66
// Output: 66   66  80



#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: DisplayRange
// Description:display all elements from that range
// Input: Integer,Integer,Integer,Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

void DisplayRange(int Arr[], int iLength, int iNo1,int iNo2)
{   
    int iCnt=0;

    printf("Elements between range are:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]>=iNo1)&&(Arr[iCnt]<=iNo2))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }

}

int main()
{
    int iSize=0,iCnt=0, iValue1=0, iValue2=0;
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

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);


    DisplayRange(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}