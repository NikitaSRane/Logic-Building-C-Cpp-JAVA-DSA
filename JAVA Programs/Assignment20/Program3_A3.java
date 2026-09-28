// find duplicate elements using in-built+custom

import java.util.*;

public class Program3_A3 {

    public static List<Integer> unique(int Arr[])
    {
        List<Integer> dup=new ArrayList<>();
        

       for(int iCnt=0; iCnt<Arr.length;iCnt++)
       {
            boolean bFlag=false;
            for(int j=0; j< dup.size();j++)
            {
                if(Arr[iCnt] == dup.get(j))
                {
                    bFlag=true;
                    break;
                }
            }
            if(bFlag== false)
            {
                dup.add(Arr[iCnt]);
            }
       }
       return dup;
    }
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        List<Integer> set=unique(Arr);
        
        // find duplicate elements
        Set<Integer> dup= new HashSet<>(); // store duplicate elements
        
        for (Integer element : set)
        {
            int iCount=0;
            for(int iCnt=0; iCnt< Arr.length;iCnt++) {
                if(element == Arr[iCnt])
                {
                    iCount++;
                }
            }
            if(iCount > 1)
            {
                dup.add(element);
            }
        }
        System.out.println(dup);
    }
}
