class Node<T>
{
    public T data;
    public Node<T> next;
}

class Stack<T>
{
    private int iCount;
    private Node<T> First;

    public Stack()
    {
        iCount=0;
        First=null;
    }
    public void Push(T iNo) // insertFirst()
    {
        Node<T> newn=null;

        newn=new Node<T>();
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

    public T Pop() // DeleteFirst()
    {
        T iValue;

        if(First == null)
        {
            System.out.println("Unable to pop element as stack is empty");
            return null;
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
        Node<T> temp=null;
        temp=First;
        while(temp != null)
        {
            System.out.println(temp.data);
            temp=temp.next;   
        }
    }
}

class SG
{
    public static void main(String args[])
    {
        Stack<Float> sobj=new Stack<Float>();
        int iRet=0;
        Float fRet=0.0f;
        sobj.Push(11.34f);
        sobj.Push(21.34f);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
        sobj.Display();
        fRet=sobj.Pop();
        System.out.println("Popped element is "+fRet);
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}