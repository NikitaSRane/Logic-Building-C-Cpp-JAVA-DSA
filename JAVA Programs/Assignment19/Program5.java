// Problems on N-Numbers
// display maximum squared of even elemets using stream api filter map and reduce

import java.util.*;

class Program5
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
            
            // display product using steam api

            int iMaxSquareEven=iList.stream().filter(n-> n % 2 == 0).map(n->n*n).reduce(0,Math::max);
            
            System.out.println("Maximum squared even element is: "+iMaxSquareEven);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}