// find duplicate elements in sorted reverse order using stream with list

import java.util.*;
import java.util.stream.Collectors;

public class Program4_A2 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        // Approach 2 using list
        Set<Integer> set=new HashSet<>();
        
        // pass to list after sorting
        List<Integer> duplist=Arrays.stream(Arr).boxed().filter(n->!set.add(n)).distinct().sorted(Comparator.reverseOrder()).collect(Collectors.toList());
          
        System.out.println(duplist);
    }
}