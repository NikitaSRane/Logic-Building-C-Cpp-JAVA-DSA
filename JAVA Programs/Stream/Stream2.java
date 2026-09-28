// usage of filter,map and forEach

import java.util.*;

class Stream2
{
    public static void main(String args[])
    {
        String names[]={"Nikita","Sagar","Dhruvi","Neha","Anita","Shraddha","Sanket","Arvind"};

        // convert to collection first.
        List<String> nameList=Arrays.asList(names);

        // create a stream and do steam operation
        nameList.stream().filter(n->n.startsWith("S")).map(n->n.toUpperCase()).forEach(n->System.out.println(n));
    }
}