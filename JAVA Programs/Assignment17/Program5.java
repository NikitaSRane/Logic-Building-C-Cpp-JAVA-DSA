// Problems on N-Numbers
// Display dynamic array elements using Iterator class. 
// Set given number to given position/index using user-defined method

import java.util.*;

class Program5
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

    public static void set(ArrayList<Integer> aObj,Integer iPos, Integer iNo)
    {
        Integer Arr[]=new Integer[aObj.size()]; // empty array created
        Arr=aObj.toArray(Arr);          // convert arraylist to array

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(iCnt == iPos)
            {
                Arr[iCnt]=iNo;  // set value to index
            }
        }

        aObj.clear(); // clear arraylist

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            aObj.add(Arr[iCnt]); // add array element to arraylist
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
            set(aObj,iPos,iNo);
            display(aObj);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
    
}