// find duplicate elements using in-built

import java.util.*;

public class Program3_A1 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        Set<Integer> set= new HashSet<>(); // unique element with order maintain
        Set<Integer> dup= new LinkedHashSet<>(); // store duplicate elements

        for (int element : Arr) {
            if(!set.add(element)) // if set already contains element add method returns false
            {
                dup.add(element);
            }
        }
        
        System.out.println(dup);
    }
}
