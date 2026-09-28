// Display first 3 element having 2 numbers(digits) in reverse order

/*
    convert array to stream
    filter each element by count
    sort
    display first 3 elements using limit
*/

// Approach 2: using stream

import java.util.*;

public class Program1_A6{

    public static void main(String args[])
    {
        // use Integer Object for reverse order using comparator
        Integer Arr[]={68,122,36,-23,755,5,5000,4,300,75,50000,37,64,974,2,45};
        // convert to stream // filter by length after converting to string //sort //set limit to 3 // display
        Arrays.stream(Arr).filter(n->String.valueOf(Math.abs(n)).length() == 2).sorted(Comparator.reverseOrder()).limit(3).forEach(n->System.out.println(n));
    }
}
