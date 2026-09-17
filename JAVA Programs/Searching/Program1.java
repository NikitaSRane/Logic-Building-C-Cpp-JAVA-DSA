// All logic inside main

package Searching;
import java.util.*;

public class Program1 {
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number of length: ");
            int ilength=sObj.nextInt();

            int Arr[]=new int[ilength]; // dynamic array created as per size

            System.out.println("Enter number of elements: ");
            for(int iCnt=0;iCnt<Arr.length;iCnt++)
            {
                Arr[iCnt]=sObj.nextInt();
            }

            System.out.println("Elements are: ");
            for(int iCnt:Arr)
            {
                System.out.println(iCnt);
            }

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
