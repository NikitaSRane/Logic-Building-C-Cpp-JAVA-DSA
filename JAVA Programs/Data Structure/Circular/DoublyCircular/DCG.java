class Node<T>
{
    public T data;
    public Node<T> next;
    public Node<T> prev;
}

class DoublyCL<T>
{
    private int iCount;
    private Node<T> First;
    private Node<T> Last;

    public DoublyCL()
    {
        iCount=0;
        First=null;
        Last=null;
    }

    public void InsertFirst(T iNo)
    {
        Node<T> newn=null;
        newn=new Node<T>();

        newn.data=iNo;
        newn.next=null;
        newn.prev=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.next=First;
            First.prev=newn;
            First=newn;
        }
        Last.next=First;
        First.prev=Last;
        iCount++;
    }
    public void InsertLast(T iNo)
    {
        Node<T> newn=null;
        newn=new Node<T>();

        newn.data=iNo;
        newn.next=null;
        newn.prev=null;

        if((First == null)&&(Last == null))
        {
            First=newn;
            Last=newn;
        }
        else
        {
            newn.prev=Last;
            Last.next=newn;
            Last=newn;
        }
        Last.next=First;
        First.prev=Last;
        iCount++;
    }
    public void Display()
    {
        System.out.print("<=>");
        do
        {
            System.out.print(First.data+"<=>");
            First=First.next;
        }
        while(First != Last.next);
        System.out.println();
    }
    public int Count()
    {
        return iCount;
    }

    public void InsertAtPos(T iNo, int iPos)
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
            Node<T> temp=null;
            temp=First;

            Node<T> newn=null;
            newn=new Node<T>();

            newn.data=iNo;
            newn.next=null;
            newn.prev=null;

            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            newn.prev=temp;
            newn.next=temp.next;
            temp.next.prev=newn;
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
        First.prev=Last;
        Last.next=First;
        iCount--;
    }

    public void DeleteLast()
    {
        if((First == null)&&(Last == null))
        {
            System.out.println("Unable to delete as linkedlist is empty");
            return;
        }
        else
        {
            Last=Last.prev;
        }
        First.prev=Last;
        Last.next=First;
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1 )||(iPos > iCount))
        {
            System.out.println("Invalid position");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            int iCnt=0;
            Node<T> temp=null;
            temp=First;

            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            temp.next.prev=temp;

            iCount--;
        }
    }

}

class DCG
{
    public static void main(String args[])
    {
        DoublyCL<Integer> dobj=new DoublyCL<Integer>();
        int iRet=0;
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.InsertFirst(30);
        dobj.InsertFirst(40);
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.Display();
        dobj.InsertLast(50);
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.Display();
        dobj.InsertAtPos(20,2);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.DeleteFirst();
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
        dobj.DeleteAtPos(2);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}