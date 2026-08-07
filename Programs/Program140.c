#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[],int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        Arr[i]=Arr[i]+1;
    }
}

int main()
{
    int iCount=0,i=0;
    int *Brr=NULL;

    printf("Enter number of elements that you want to enter:\n");
    scanf("%d",&iCount);

    Brr=(int*)malloc(iCount*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr [i]);
    }

    Updator(Brr,iCount);
    printf("Data after updation:\n");

    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}