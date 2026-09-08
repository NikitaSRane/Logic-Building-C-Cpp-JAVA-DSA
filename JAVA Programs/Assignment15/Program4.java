// Problems on N- Numbers 
// Create Static Array by providing size. Accept elements and display using user-defined functions.

import java.util.*;

class Program4
{
    public static void accept(int Arr[],Scanner sObj)
    {
        System.out.println("Enter "+Arr.length+" elements: ");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sObj.nextInt();
        }
    }
    
    public static void display(int Arr[])
    {
        System.out.print("Elements are:[");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]);
            
            if(iCnt < Arr.length-1)
            {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter size of array: ");
            int iSize=sObj.nextInt();

            int iArr[]= new int[iSize];
            accept(iArr,sObj);
            display(iArr);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}