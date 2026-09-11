// Problems on N-Numbers
// Display dynamic array elements using Iterator class. 
// Return the second last position/index/last occurence of given element from array using user-defined method

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
/*

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
    */
 

    public static int secondLastPosition(ArrayList<Integer> aObj,Integer iNo)
    {
        int lPos=-1, sLPos=-1;
        for(int iCnt=0;iCnt<aObj.size();iCnt++)
        {
            if(aObj.get(iCnt).equals(iNo))
            {
                sLPos=lPos;
                lPos=iCnt;
            }
        }
        return sLPos;
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
            int iPos=secondLastPosition(aObj,iNo);
            System.out.println("second Last Index of element is: "+iPos);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
    
}