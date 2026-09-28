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
    public void Push(int iNo)
    {

    }

    public int Pop()
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

class S1
{
    public static void main(String args[])
    {
        Stack sobj=new Stack();
        int iRet=0;

        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}