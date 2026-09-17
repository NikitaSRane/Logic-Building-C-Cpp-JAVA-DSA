// linear search algorithm

import java.util.*;

public class Program5{
    
    public static int linearSearch(ArrayX aObj,int iNo)
    {
        for(int iCnt=0;iCnt<aObj.iSize;iCnt++)
        {
            if(aObj.Arr[iCnt]==iNo)
            {
                return iCnt; // if element found
            }
        }
        return -1; // if element not found
    }

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
            int iRet=linearSearch(aObj,iNo);
            if(iRet == -1)
            {
                System.out.println("Element not not.");
            }
            else
            {
                System.out.println("Index is :"+iRet);
            }

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
