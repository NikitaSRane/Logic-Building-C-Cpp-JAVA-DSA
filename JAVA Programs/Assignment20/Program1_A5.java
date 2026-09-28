// Display first 3 element having 2 numbers(digits) in sorted order

/*
    convert array to stream
    filter each element by count
    sort
    display first 3 elements using limit
*/

// Approach 2: using stream

import java.util.*;

public class Program1_A5{

    public static void main(String args[])
    {
        int Arr[]={68,122,36,-23,755,5,5000,4,300,75,50000,37,64,974,2,45};
        // convert to stream // filter by length after converting to string //sort //set limit to 3 // display
        Arrays.stream(Arr).filter(n->String.valueOf(Math.abs(n)).length() == 2).sorted().limit(3).forEach(n->System.out.println(n));
    }
}
