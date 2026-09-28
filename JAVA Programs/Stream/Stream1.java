// usage of filter and forEach

import java.util.*;

class Stream1
{
    public static void main(String args[])
    {
        String names[]={"Nikita","Sagar","Dhruvi","Neha","Anita","Shraddha","Sanket","Arvind"}; // object array

        // convert to collection first.
        List<String> nameList=Arrays.asList(names);

        // create a stream and do steam operation
        nameList.stream().filter(n->n.startsWith("S")).forEach(n->System.out.println(n));
    }
}