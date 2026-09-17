// Binary Search algorithm

import java.util.*;

public class Program7{
    
    public static int binarySearch(ArrayX aObj, int iNo)
    {
        int istart=0;
        int iend=aObj.iSize-1;

        while(istart <= iend)
        {
            int imid=istart+(iend-istart)/2; // calculate mid index

            if(aObj.Arr[imid] == iNo)
            {
                return imid; // element found
            }
            else if(iNo < aObj.Arr[imid])
            {
                iend=imid-1; // left half
            }
            else if(iNo > aObj.Arr[imid])
            {
                istart=imid+1; // right half
            }
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
            int iRet=binarySearch(aObj, iNo);
            if(iRet == -1)
            {
                System.out.println("Element not found");
            }
            else
            {
                System.out.println("Element found at index "+iRet);
            }


        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
        
    }
}
