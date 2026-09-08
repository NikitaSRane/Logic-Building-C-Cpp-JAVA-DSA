// Problems on N- Numbers 
// dynamic array using ArrayList with hardcoded values and display.

import java.util.*;

class Program5
{
    public static void main(String args[])
    {
        try
        {
            ArrayList<Integer> aObj=new ArrayList<>();
            aObj.add(10);
            aObj.add(20);
            aObj.add(30);

            System.out.println("ArrayList elements are: ");
            for(int element:aObj)
            {
                System.out.print(element+" ");
            }
            System.out.println();
            System.out.println("Number of elements are: "+aObj.size());

            System.out.println("ArrayList is: "+aObj);

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }   
}