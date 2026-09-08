// Problems on N- Numbers 
// Create Static Array with hardcoded values and display elements using user-defined function.
// display same like output of Arrays.toString() method.

import java.util.*;

class Program3
{    
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
         try
        {
            int iArr[]= {10,20,30,40,50};
            //user- defined function to display elements
            display(iArr);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}