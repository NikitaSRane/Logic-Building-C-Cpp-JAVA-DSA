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

    }

    public void InsertAtPos(int iNo, int iPos)
    {

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

class SC2
{
    public static void main(String args[])
    {
        SinglyCL sobj=new SinglyCL();
        int iRet=0;
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.InsertFirst(34);
        sobj.InsertFirst(56);
        sobj.InsertFirst(778);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}