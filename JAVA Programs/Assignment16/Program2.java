// Problems on N- Numbers 
// dynamic array using ArrayList.Display even elements

import java.util.*;

class Program2
{
    public static void displayEven(ArrayList<Integer> aObj)
    {
        System.out.println("Even elements are: ");
        for(int element: aObj)
        {
            if(element % 2 == 0)
            {
                System.out.println(element);
            }
        }
    }
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
            displayEven(aObj);

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }   
}