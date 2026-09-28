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
        int iValue=0;

        if(First == null)
        {
            System.out.println("Unable to pop element as stack is empty");
            return -1;
        }
        else
        {
            iValue=First.data;
            First=First.next;
        }
        iCount--;

        return iValue;
    }

    public int Count()
    {
        return iCount;
    }
    public void Display()
    {
        Node temp=null;
        temp=First;
        while(temp != null)
        {
            System.out.println(temp.data);
            temp=temp.next;   
        }
    }
}

class S4
{
    public static void main(String args[])
    {
        Stack sobj=new Stack();
        int iRet=0;
        sobj.Push(11);
        sobj.Push(21);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
        iRet=sobj.Pop();
        System.out.println("Popped element is "+iRet);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}