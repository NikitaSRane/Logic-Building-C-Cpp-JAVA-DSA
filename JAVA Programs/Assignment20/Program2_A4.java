// Remove duplicate elements

//Approach 3: using custom logic

import java.util.*;

public class Program2_A4 {

    public static void unique(int Arr[])
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
       System.out.println(dup.toString());
    }
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,68,5000,4,300,75,50000,37,64,974,2,45};
        unique(Arr);
    }
}
