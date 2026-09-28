class Node
{
    public int data;
    public Node next;
}

class SinglyCL
{
    public int iCount;
    public Node First;
    public Node Last;

    public SinglyCL()
    {
        iCount=0;
        First=null;
        Last=null;
    }
    public void Display()
    {
        if((First == null)&&(Last == null))
        {
            System.out.println("Linkedlist is empty");
            return;
        }
        System.out.print("->");
        do
        {
            System.out.print(First.data+"->");
            First=First.next;
        }
        while(Last.next != First);
        System.out.println();
        
    }
    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        Node newn=null;
        newn= new Node();
        newn.data=iNo;
        newn.next=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.next=First;
            First=newn;
        }
        Last.next=First;
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        Node newn=null;
        newn= new Node();
        newn.data=iNo;
        newn.next=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            Last.next=newn;
            Last=newn;
        }
        Last.next=First;
        iCount++;
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
        if((First == null)&&(Last == null))
        {
            System.out.println("Unable to delete as linkedlist is empty");
            return;
        }
        else
        {
            First=First.next;
        }
        Last.next=First;
        
        iCount--;
    }
    public void DeleteLast()
    {

    }
    public void DeleteAtPos(int iPos)
    {

    }
}

class SC6
{
    public static void main(String args[])
    {
        SinglyCL sobj=new SinglyCL();
        int iRet=0;
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();

        sobj.InsertFirst(34);
        sobj.InsertFirst(56);
        sobj.InsertFirst(778);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
        sobj.InsertLast(6);
        sobj.InsertLast(7);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
        sobj.InsertAtPos(30,2);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
        sobj.DeleteFirst();
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
    }
}