// oop approach which contains structure only.

import java.util.*;

public class Program4{
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number of length: ");
            int ilength=sObj.nextInt();

            ArrayX aObj=new ArrayX(ilength);
            aObj.accept(sObj);
            aObj.display(); 

            System.out.println("Enter element which you want to search: ");
            int iNo=sObj.nextInt();

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
