// Display first 3 element having 2 numbers(digits) in descending order

/*
    sort
    filter each element by count
    display last 3 elements 
*/

// Approach 1: using in-built method

import java.util.*;

public class Program1_A2{

    public static void main(String args[])
    {
        int Arr[]={68,122,36,-23,755,5,5000,4,300,75,50000,37,64,974,2,45};

        Arrays.sort(Arr); // sort array in ascending order

        // create new array to store elements having 2 digits
        List<Integer> countList =new ArrayList<>();

        for (int element : Arr) {
            if(String.valueOf(element).length() == 2) // convert to string and check digit count
            {
                countList.add(element); // add element 
            }
        }

        // display first 3 elements in descending order
        int check=0;
        for(int iCnt=countList.size()-1; iCnt >= 0 && check < 3;iCnt--)
        {
            check++; // count elements
            System.out.println(countList.get(iCnt));
        }
    }
}
