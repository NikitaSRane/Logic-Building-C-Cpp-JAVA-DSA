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

    }

    public int DeQueue() // DeleteFirst()
    {
        return 0;
    }
    public void Display()
    {

    }

    public int Count()
    {
        return iCount;
    }
}

class Q1
{
    public static void main(String args[])
    {
        Queue qobj=new Queue();
        int iRet=0;

        iRet=qobj.Count();
        System.out.println("Number of elements are "+iRet);

    }

}