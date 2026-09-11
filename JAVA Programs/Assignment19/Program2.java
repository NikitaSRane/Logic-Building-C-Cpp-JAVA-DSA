// Problems on N-Numbers
// display sum of all even elements using traditional way and stream api approach filter and reduce

import java.util.*;

class Program2
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

    public static int DisplaySumEven(List<Integer> iList)
    {
        // traditional way
        List<Integer> evenList=new ArrayList<>();

        for(Integer element: iList)
        {
            if(element % 2 == 0)
            {
                evenList.add(element);
            }
        }
        System.out.println("Display Even "+evenList);

        int iSum=0;
        for(Integer element: evenList)
        {
            iSum=iSum+element;   
        }

        return iSum;
    }
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            List<Integer> iList=new ArrayList<>();
            accept(iList, sObj);
            System.out.println("Display"+iList);
            int iSum=DisplaySumEven(iList);
            // stream api approach

            //int iSum=iList.stream().filter(n-> n % 2 == 0).reduce(0,(sum,result)->sum+result);

            System.out.println("Sum of even elements is: "+iSum);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}