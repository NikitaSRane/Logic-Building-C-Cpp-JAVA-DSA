// find first non-reapeated number from list
// using stream

import java.util.*;
import java.util.stream.Collectors;

class Program5_A2
{
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        List<Integer> list=Arrays.stream(Arr).boxed().collect(Collectors.toList()); // convert to list

        List<Integer> uniquelist=list.stream().filter(element->Collections.frequency(list, element) == 1).collect(Collectors.toList());
        
        if(!uniquelist.isEmpty())
        {
            System.out.println("First non-repeated element is "+uniquelist.getFirst());
        }
        else
        {
            System.out.println("No non repeated elements");
        }
        
    }
}