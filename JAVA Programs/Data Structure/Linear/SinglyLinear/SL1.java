
class Node
{
    public int data;
    public Node next; // reference
}

class SinglyLL
{
    public int iCount;
    public Node First;

    public SinglyLL()
    {
        System.out.println("Object of SinglyLL created successfully.");
        iCount=0;
        First=null;
    }
}

class SL1
{
    public static void main(String args[])
    {
        SinglyLL obj=new SinglyLL();
    }
}