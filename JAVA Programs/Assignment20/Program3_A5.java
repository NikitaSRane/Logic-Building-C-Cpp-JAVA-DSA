// find duplicate elements in sorted order using stream 

import java.util.*;
import java.util.stream.Collectors;

public class Program3_A5 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        // Approach 1 using set
        Set<Integer> set=new HashSet<>();

        // directly create treeset
        Set<Integer> dupset=Arrays.stream(Arr).boxed().filter(n->!set.add(n)).collect(Collectors.toCollection(TreeSet::new));
        
        System.out.println(dupset);
    }
}