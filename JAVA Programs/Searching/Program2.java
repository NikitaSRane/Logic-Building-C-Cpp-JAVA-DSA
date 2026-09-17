// logic split into functions

package Searching;
import java.util.*;

public class Program2 {
    public static void accept(Scanner sObj, int Arr[])
    {
        System.out.println("Enter number of elements: ");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sObj.nextInt();
        }
    }

    public static void dispaly(int Arr[])
    {
        System.out.println("Elements are: ");
        for(int iCnt:Arr)
        {
            System.out.println(iCnt);
        }
    }
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number of length: ");
            int ilength=sObj.nextInt();

            int Arr[]=new int[ilength]; // dynamic array created as per size

            accept(sObj, Arr);
            dispaly(Arr); 

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
