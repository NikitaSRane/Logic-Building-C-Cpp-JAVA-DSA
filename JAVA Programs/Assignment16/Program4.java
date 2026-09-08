// Problems on N- Numbers 
// dynamic array using ArrayList.Return maximum number

import java.util.*;

class Program4
{
    public static int maximumElement(ArrayList<Integer> aObj)
    {
        int iMax=aObj.get(0);
        for(int element: aObj)
        {
            if(element > iMax)
            {
                iMax=element;
            }
        }
        return iMax;
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
            int iRet=maximumElement(aObj);
            System.out.println("Maximum element is: "+iRet);

        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }   
}