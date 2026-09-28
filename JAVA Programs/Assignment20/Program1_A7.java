// Display first 3 element having 2 numbers(digits) in sorted order

/*
    filter each element by count
    sort(bubble sort)
    display first 3 elements using limit
*/

// Approach 2: using custom logic

import java.util.*;

public class Program1_A7{

    public static void bubbleSort(List<Integer> list)
    {
        for(int i=0;i<list.size()-1;i++)
        {
            for(int j=0;j<list.size()-1-i;j++)
            {
                if(list.get(j) > list.get(j+1))
                {
                    int temp=list.get(j);
                    list.set(j,list.get(j+1));
                    list.set(j+1,temp);
                }
            }
        }
    }
        
    // find length of number
    public static int count(int iNo)
    {
        if(iNo < 0) // updator
        {
            iNo=-iNo;
        }
        int ilength=0;

        while(iNo != 0)
        {
            ilength++;
            iNo=iNo / 10;
        }
        return ilength;

    }

    public static void main(String args[])
    {
        int Arr[]={68,122,36,-23,755,5,5000,4,300,75,50000,37,64,974,2,45};
        
        List<Integer> list=new ArrayList<>();

        for (int element : Arr) {
            if(count(element) == 2)
            {
                list.add(element);
            }
        }
        System.out.println(list);
        // sort
        bubbleSort(list);

        // display first 3 elements

        for(int i=0; i<list.size() && i<3;i++)
        {
            System.out.println(list.get(i));
        }

    }
}
