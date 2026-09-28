// find first non-reapeated number from list
// using in-built methods

import java.util.*;

class Program5_A1
{
    public static void main(String args[])
    {
        int Arr[]={68,122,45,-23,755,64,5000,64,300,75,50000,37,64,974,2,45};

        System.out.println(Arrays.toString(Arr));
        
        Set<Integer> unique=new LinkedHashSet<>(); // to store unique elements

        Set<Integer> dup=new LinkedHashSet<>(); // to store duplicate elements

        for (Integer element : Arr) {
            
            if(!unique.add(element)) 
            {
                dup.add(element);
            }
        }
        System.out.println(unique);// unique
        System.out.println(dup); // duplicate

        Set<Integer> nonrepeat=new LinkedHashSet<>();

        for (Integer element : unique) {
            
         
            if(!dup.contains(element))
            {
                nonrepeat.add(element);
            } 
            
        }
        System.out.println(nonrepeat); // nonrepeated set
        System.out.println(nonrepeat.iterator().next()); // first element
    }
}