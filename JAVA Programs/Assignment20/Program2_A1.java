// Remove duplicate elements

//Approach 1: using in-built

import java.util.*;

public class Program2_A1 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,4,300,75,50000,37,64,974,2,45};

        // convert to set for unique
        Set<Integer> set=new LinkedHashSet<>(); // maintains order

        for (Integer element : Arr) {
            set.add(element);   
        }
        System.out.println(set);
    }
}
