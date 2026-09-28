class Node
{
    public int data;
    public Node next;
    public Node prev;
}

class DoublyLL
{
    public int iCount;
    public Node First;

    public DoublyLL()
    {
        iCount=0;
        First=null;
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {

    }

    public void InsertLast(int iNo)
    {

    }
    
    public void InsertAtPos(int iNo, int iPos)
    {

    }

    public void Display()
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
class DL1
{
    public static void main(String args[])
    {
        DoublyLL dobj=new DoublyLL();
        int iRet=0;

        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}