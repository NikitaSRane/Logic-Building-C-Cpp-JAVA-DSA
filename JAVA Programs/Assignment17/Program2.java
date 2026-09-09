// Problems on N-Numbers
// Display dynamic array elements using Iterator class. Check whether given element is exist or not in dynamic array using built-in method.

import java.util.*;

class Program2
{
    public static void accept(ArrayList<Integer> aObj, Scanner sObj)
    {
        System.out.println("Please type -1 to stop. Enter elements : ");

        while(true)
        {
            int iNo=sObj.nextInt();
            if(iNo == -1)
            {
                break;
            }
            aObj.add(iNo);
        }
    }


    // display using Iterator class
    public static void display(ArrayList<Integer> aObj)
    {
        System.out.println("Elements are: ");
        Iterator<Integer> iObj=aObj.iterator();
        while(iObj.hasNext())
        {
            System.out.print(iObj.next()+" ");
        }
    }

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            ArrayList<Integer> aObj=new ArrayList<>();
            accept(aObj,sObj);
            //display(aObj);
            System.out.println("Enter element which you want to search: ");
            Integer iNo=sObj.nextInt();
            boolean bRet=aObj.contains(iNo);
            if(bRet)
            {
                System.out.println("Given element "+iNo+" is exist.");
            }
            else
            {
                System.out.println("Given element "+iNo+" does not exist.");

            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
    
}