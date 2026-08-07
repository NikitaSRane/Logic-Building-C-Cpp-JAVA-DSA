class node
{
    public int data;
    public node next;
    
}

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Object of SinglyLL gets created successfully.");
        First=null;
        iCount=0;
    }
}

class Program419
{
    public static void main(String args[])
    {
        SinglyLL obj=new SinglyLL();
    }
}