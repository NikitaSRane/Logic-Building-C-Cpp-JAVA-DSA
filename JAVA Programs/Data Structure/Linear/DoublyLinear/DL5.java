class Node
{
    public int data;
    public Node next;
    public Node prev;
}

class DoublyLL
{
    public int iCount;
    public Node First;

    public DoublyLL()
    {
        iCount=0;
        First=null;
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.prev=null;
        newn.next=null;

        if(First == null)
        {
            First=newn;
        }
        else
        {
            newn.next=First;
            First.prev=newn;
            First=newn;
        }
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.prev=null;
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
            newn.prev=temp;
            temp.next=newn;
        }
        iCount++;

    }
    
    public void InsertAtPos(int iNo, int iPos)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.prev=null;
        newn.next=null;

        if((iPos < 0)||(iPos > iCount+1))
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
            newn.prev=temp;
            newn.next=temp.next;
            temp.next.prev=newn;
            temp.next=newn;

            iCount++;
        }
    }

    public void Display()
    {
        Node temp=null;
        temp=First;
        System.out.print("null<=>");
        while(temp != null)
        {
            System.out.print(temp.data+"<=>");
            temp=temp.next;
        }
        System.out.println("null");

    }

    public void DeleteFirst()
    {

    }
    public void DeleteLast()
    {

    }
    public void DeleteAtPos(int iPos)
    {
        
    }

}
class DL5
{
    public static void main(String args[])
    {
        DoublyLL dobj=new DoublyLL();
        int iRet=0;
        dobj.InsertFirst(32);
        dobj.InsertFirst(54);
        dobj.InsertLast(80);
        dobj.InsertLast(56);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.InsertAtPos(45,3);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}