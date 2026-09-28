// find duplicate elements using stream

import java.util.*;
import java.util.stream.Collectors;

public class Program3_A2 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        Set<Integer> set=new HashSet<>();

        Set<Integer> dup=Arrays.stream(Arr).boxed().filter(n->!set.add(n)).collect(Collectors.toSet());
        System.out.println(dup);
    }
}