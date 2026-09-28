// find duplicate elements using in-built sorted order

import java.util.*;

public class Program3_A4 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        Set<Integer> set= new HashSet<>(); // unique element
        Set<Integer> dup= new TreeSet<>(); // store duplicate elements in sorted order

        for (int element : Arr) {
            if(!set.add(element)) // if set already contains element add method returns false
            {
                dup.add(element);
            }
        }

        System.out.println(dup);
    }
}
