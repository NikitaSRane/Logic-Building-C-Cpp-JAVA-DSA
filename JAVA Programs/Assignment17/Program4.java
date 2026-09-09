// Problems on N-Numbers
// Display dynamic array elements using Iterator class. 
// Set given number to given position/index using built-in method

import java.util.*;

class Program4
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
    
    /*

    public static boolean search(ArrayList<Integer> aObj,Integer iNo)
    {
        for(Integer iElement : aObj)
        {
            if(iElement.equals(iNo))
            {
                return true;
            }
        }
        return false;
    }
    */

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            ArrayList<Integer> aObj=new ArrayList<>();
            accept(aObj,sObj);
            //display(aObj);
            System.out.println("Enter element which you want to set: ");
            Integer iNo=sObj.nextInt();
            System.out.println("Enter index number which you want to set: ");
            Integer iPos=sObj.nextInt();
            aObj.set(iPos,iNo);
            display(aObj);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
    
}