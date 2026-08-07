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
    public void InsertFirst(int No)
    {
        node newn=null;

        newn=new node();

        newn.data=No;
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

class Program420
{
    public static void main(String args[])
    {
        SinglyLL obj=new SinglyLL();
        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
    }
}