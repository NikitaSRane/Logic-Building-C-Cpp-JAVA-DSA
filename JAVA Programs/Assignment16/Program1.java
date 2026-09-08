// Problems on N- Numbers 
// dynamic array using ArrayList with accept element values and display.

import java.util.*;

class Program1
{
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            ArrayList<Integer> aObj=new ArrayList<>();

            System.out.println("Enter array elements. Type -1 to stop");
            while(true)
            {
                int iNo=sObj.nextInt();
                if(iNo == -1)
                {
                    break;
                }
                aObj.add(iNo);
            }
            // display
            System.out.println("ArrayList is: "+aObj);
            System.out.println("Number of elements are: "+aObj.size());

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }   
}