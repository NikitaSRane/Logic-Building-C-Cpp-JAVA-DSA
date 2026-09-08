// Problems on N- Numbers 
// dynamic array using ArrayList.Return minimum number

import java.util.*;

class Program5
{
    public static int minimumElement(ArrayList<Integer> aObj)
    {
        int iMin=aObj.get(0);
        for(int element: aObj)
        {
            if(element < iMin)
            {
                iMin=element;
            }
        }
        return iMin;
    }
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            ArrayList<Integer> aObj=new ArrayList<>();

            System.out.println("Enter array elements. Type -1 to stop");
            while(true)
            {
                int iNo=sObj.nextInt();
                if(iNo == -1)
                {
                    break;
                }
                aObj.add(iNo);
            }
            int iRet=minimumElement(aObj);
            System.out.println("Minimum element is: "+iRet);

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }   
}