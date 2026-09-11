// Problems on N-Numbers
// Display numbers in given range

import java.util.*;
import java.util.stream.Collectors;

class Program1
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

    public static void DisplayRange(List<Integer> iList, Scanner sObj)
    {
        System.out.println("Enter starting range: ");
        int iStart=sObj.nextInt();
        
        System.out.println("Enter ending range: ");
        int iEnd=sObj.nextInt();

        List<Integer> range= new ArrayList<>();
        // traditional way
        
        for(Integer element : iList)
        {
            if((element >=iStart)&&(element <=iEnd))
            {
                range.add(element);
            }
        }

        /* using stream api

        range=iList.stream()
        .filter(n-> (n >= iStart)&&(n <=iEnd))
        .collect(Collectors.toList());
        
        */
       System.out.println("Elements within the range"+range);
    }

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            List<Integer> iList=new ArrayList<>();
            accept(iList, sObj);
            System.out.println("Display"+iList);
            DisplayRange(iList,sObj);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}