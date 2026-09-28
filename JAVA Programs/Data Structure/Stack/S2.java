class Node
{
    public int data;
    public Node next;
}

class Stack
{
    public int iCount;
    public Node First;

    public Stack()
    {
        iCount=0;
        First=null;
    }
    public void Push(int iNo) // insertFirst()
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

    public int Pop() // DeleteFirst()
    {
        return 0;
    }

    public int Count()
    {
        return iCount;
    }
    public void Display()
    {

    }
}

class S2
{
    public static void main(String args[])
    {
        Stack sobj=new Stack();
        int iRet=0;
        sobj.Push(11);
        sobj.Push(21);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}