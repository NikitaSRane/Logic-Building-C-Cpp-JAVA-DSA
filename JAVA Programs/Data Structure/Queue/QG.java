class Node<T>
{
    public T data;
    public Node<T> next;
}

class Queue<T>
{
    private int iCount;
    private Node<T> First;

    public Queue()
    {
        iCount=0;
        First=null;
    }
    public void EnQueue(T iNo) // InsertLast()
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
            Node<T> temp=null;
            temp=First;

            while(temp.next != null)
            {
                temp=temp.next;
            }
            temp.next=newn;
        }
        iCount++;
    }

    public T DeQueue() // DeleteFirst()
    {
        T iValue;

        if(First == null)
        {
            System.out.println("Unable to delete as queue is empty");
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

    public int Count()
    {
        return iCount;
    }
}

class QG
{
    public static void main(String args[])
    {
        Queue<Double> qobj=new Queue<Double>();
        int iRet=0;
        Double dRet=0.0;
        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);
        qobj.EnQueue(21.34);
        qobj.EnQueue(11.64);
        qobj.EnQueue(60.99);
        qobj.Display();
        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);
        dRet=qobj.DeQueue();
        System.out.println("Popped element is "+dRet);
        qobj.Display();
        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);

    }

}