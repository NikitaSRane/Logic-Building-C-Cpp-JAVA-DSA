// Problems on N-Numbers
// display largest element using stream api using reduce

import java.util.*;

class Program3
{
    public static void accept(List<Integer> iList, Scanner sObj)
    {
        System.out.println("Press -1 to stop. Enter elements: ");
        while(true)
        {
            Integer iNo=sObj.nextInt();
            if(iNo == -1)
            {
                break;
            }
            iList.add(iNo);
        }
    }

    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            List<Integer> iList=new ArrayList<>();
            accept(iList, sObj);
            System.out.println("Display"+iList);
            
            // display using steam api

            int iMax=iList.stream().reduce(0,Integer::max);
            System.out.println("Largest element is: "+iMax);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}