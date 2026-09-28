
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

    public void InsertFirst(int iNo)
    {
       Node newn=null;
       newn=new Node();

       newn.data=iNo;
       newn.next=null;

       if(First == null)
       {
            First=newn;   
       }
       else
       {
            newn.next=First;
            First=newn; 
       }
       iCount++;
    }
}

class SL2
{
    public static void main(String args[])
    {
        SinglyLL obj=new SinglyLL();
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
    }
}