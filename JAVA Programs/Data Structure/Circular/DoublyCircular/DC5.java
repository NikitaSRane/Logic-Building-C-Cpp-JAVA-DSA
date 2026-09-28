class Node
{
    public int data;
    public Node next;
    public Node prev;
}

class DoublyCL
{
    public int iCount;
    public Node First;
    public Node Last;

    public DoublyCL()
    {
        iCount=0;
        First=null;
        Last=null;
    }

    public void InsertFirst(int iNo)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.next=null;
        newn.prev=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.next=First;
            First.prev=newn;
            First=newn;
        }
        Last.next=First;
        First.prev=Last;
        iCount++;
    }
    public void InsertLast(int iNo)
    {
        Node newn=null;
        newn=new Node();

        newn.data=iNo;
        newn.next=null;
        newn.prev=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.prev=Last;
            Last.next=newn;
            Last=newn;
        }
        Last.next=First;
        First.prev=Last;
        iCount++;
    }
    public void Display()
    {
        System.out.print("<=>");
        do
        {
            System.out.print(First.data+"<=>");
            First=First.next;
        }
        while(First != Last.next);
        System.out.println();
    }
    public int Count()
    {
        return iCount;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
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

            Node newn=null;
            newn=new Node();

            newn.data=iNo;
            newn.next=null;
            newn.prev=null;

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

class DC5
{
    public static void main(String args[])
    {
        DoublyCL dobj=new DoublyCL();
        int iRet=0;
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.InsertFirst(30);
        dobj.InsertFirst(40);
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.Display();
        dobj.InsertLast(50);
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.Display();
        dobj.InsertAtPos(20,2);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}