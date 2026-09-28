// Display first 3 element having 2 numbers(digits) in sorted order

/*
    sort in descending order
    filter each element by count
    display first 3 elements
*/

// Approach 1: using in-built method

import java.util.*;

public class Program1_A3{

    public static void main(String args[])
    {
        Integer Arr[]={68,122,36,-23,755,5,5000,4,300,75,50000,37,64,974,2,45};

        // Collections use object
        Arrays.sort(Arr,Collections.reverseOrder()); // sort array in descending order

        // create new array to store elements having 2 digits
        List<Integer> countList =new ArrayList<>();

        for (Integer element : Arr) {
            if(String.valueOf(element).length() == 2) // convert to string and check digit count
            {
                countList.add(element); // add element 
            }
        }

        // display first 3 elements
        for(int iCnt=0; iCnt < countList.size() && iCnt < 3;iCnt++)
        {
            System.out.println(countList.get(iCnt));
        }
    }
}
