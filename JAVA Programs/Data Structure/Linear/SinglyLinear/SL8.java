
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

    public void InsertAtPos(int iNo, int iPos)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.next=null;

        if((iPos < 1)||(iPos > iCount+1))
        {
            System.out.println("Invalid position");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(iNo);
        }
        else
        {
            int iCnt=0;
            Node temp=null;
            temp=First;
            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next=newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as linkedlist is empty.");
            return;
        }   
        if(First.next == null)
        {
            First=null;
        }
        else
        {
            First=First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as linkedlist is empty.");
            return;
        }   
        if(First.next == null)
        {
            First=null;
        }
        else
        {
            Node temp=null;
            temp=First;

            while(temp.next.next != null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        iCount--;
    }
}

class SL8
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
        obj.InsertAtPos(45,2);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.DeleteFirst();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.DeleteLast();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}