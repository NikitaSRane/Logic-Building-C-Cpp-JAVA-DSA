// Remove duplicate elements and display in sorted order

//Approach 2: using stream api

import java.util.*;

public class Program2_A6 {
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,4,300,75,50000,37,64,974,2,45};

        int dup[]=Arrays.stream(Arr).distinct().sorted().toArray();
        System.out.println(Arrays.toString(dup));
    }
}

