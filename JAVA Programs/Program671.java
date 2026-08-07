import java.util.*;

class Program671
{
    public static void main(String args[])
    {
        LinkedList <Integer>lobj=new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println(lobj);
        System.out.println("Number of elements: "+lobj.size());

        lobj.remove(2); // use index
        System.out.println(lobj);
        System.out.println("Number of elements: "+lobj.size());
    }
}