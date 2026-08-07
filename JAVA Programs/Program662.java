import java.util.*;

class Program662
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

        for(int No:lobj)
        {
            System.out.println(No);
        }
    }
}