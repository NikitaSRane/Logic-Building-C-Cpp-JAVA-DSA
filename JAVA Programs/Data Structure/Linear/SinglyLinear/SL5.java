
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

    public void Display()
    {
        System.out.println("Elements of linkedlist are: ");

        Node temp=First;

        while(temp != null)
        {
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertLast(int iNo)
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
            Node temp=null;
            temp=First;

            while(temp.next != null)
            {
                temp=temp.next;
            }
            temp.next=newn;
       }
       iCount++;
    }
}

class SL5
{
    public static void main(String args[])
    {
        SinglyLL obj=new SinglyLL();
        int iRet=0;
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.InsertLast(101);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}