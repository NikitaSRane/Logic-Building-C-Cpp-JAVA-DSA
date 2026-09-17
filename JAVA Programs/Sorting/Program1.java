// oop approach which contains structure only.

import java.util.*;

public class Program1{
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number of length: ");
            int ilength=sObj.nextInt();

            ArrayX aObj=new ArrayX(ilength);
            aObj.accept(sObj);
            aObj.display(); 

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
