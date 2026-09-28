// Remove duplicate elements without using set

//Approach 3: using in-built

import java.util.*;

public class Program2_A2 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,4,300,75,50000,37,64,974,2,45};

        List<Integer> dup=new ArrayList<>();

        for (Integer element : Arr) {
            if(!(dup.contains(element)))
            {
                dup.add(element);
            }
        }
        System.out.println(dup);
        }
}


