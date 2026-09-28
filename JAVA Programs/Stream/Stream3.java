// usage of filter, map, forEach

import java.util.*;
import java.util.stream.Collectors;

class Stream3
{
    public static void main(String args[])
    {
        String names[]={"Nikita","Sagar","Dhruvi","Neha","Anita","Shraddha","Sanket","Arvind"};

        // convert to collection first.
        List<String> nameList=Arrays.asList(names);

        // create a stream and create list of sizes
        List<Integer> size= nameList.stream().map(n->n.length()).collect(Collectors.toList());
    }
}