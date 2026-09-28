class Node
{
    public int data;
    public Node next;
}

class Queue
{
    public int iCount;
    public Node First;

    public Queue()
    {
        iCount=0;
        First=null;
    }
    public void EnQueue(int iNo) // InsertLast()
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

    public int DeQueue() // DeleteFirst()
    {
        return 0;
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

    public int Count()
    {
        return iCount;
    }
}

class Q3
{
    public static void main(String args[])
    {
        Queue qobj=new Queue();
        int iRet=0;

        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);
        qobj.EnQueue(21);
        qobj.EnQueue(11);
        qobj.EnQueue(60);
        qobj.Display();
        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);

    }

}