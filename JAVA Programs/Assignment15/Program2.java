// Problems on N- Numbers 
// Create Static Array with hardcoded values and display elements using user-defined function.

import java.util.*;

class Program2
{    
    public static void display(int Arr[])
    {

        System.out.println("Elements are:");
        for(int element:Arr)
        {
            System.out.println(element+" ");
        }
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