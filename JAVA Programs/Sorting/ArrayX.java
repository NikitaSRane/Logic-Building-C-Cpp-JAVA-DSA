// ArrayX class 

import java.util.*;

class ArrayX
{   
    public int iSize;
    public int Arr[];

    public ArrayX(int iSize)
    {
       this.iSize=iSize;
       this.Arr=new int[iSize];

    }
    public void accept(Scanner sObj)
    {
        System.out.println("Enter number of elements: ");
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sObj.nextInt();
        }
    }

    public void display()
    {
        System.out.println("Elements are: ");
        for(int iCnt:Arr)
        {
            System.out.print(iCnt+" ");
        }
    }
}
