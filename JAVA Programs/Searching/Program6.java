// Two way search / bidirectional search algorithm

import java.util.*;

public class Program6{
    
    public static int twoWaySearch(ArrayX aObj,int iNo)
    {
        int istart=0;
        int iend=aObj.iSize-1;

        while(istart <= iend)
        {
            // checks from start
            if(aObj.Arr[istart] == iNo)
            {
                return istart;
            }
            if(aObj.Arr[iend] == iNo) // checks from end
            {
                return iend;
            }
            istart++;
            iend--;
        }
        return -1; // element not found
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
            int iRet=twoWaySearch(aObj,iNo);
            if(iRet == -1)
            {
                System.out.println("Element not found.");
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
