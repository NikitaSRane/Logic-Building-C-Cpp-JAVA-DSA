
class Node<T>
{
    public T data;
    public Node<T> next; // reference
}

class SinglyLL<T>
{
    public int iCount;
    public Node<T> First;

    public SinglyLL()
    {
        System.out.println("Object of SinglyLL created successfully.");
        iCount=0;
        First=null;
    }

    public void InsertFirst(T iNo)
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

    public void Display()
    {
        System.out.println("Elements of linkedlist are: ");

        Node<T> temp=First;

        while(temp != null)
        {
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertLast(T iNo)
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

    public void InsertAtPos(T iNo, int iPos)
    {
        Node<T> newn=null;
        newn=new Node<T>();

        newn.data=iNo;
        newn.next=null;

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
            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next=newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as linkedlist is empty.");
            return;
        }   
        if(First.next == null)
        {
            First=null;
        }
        else
        {
            First=First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as linkedlist is empty.");
            return;
        }   
        if(First.next == null)
        {
            First=null;
        }
        else
        {
            Node<T> temp=null;
            temp=First;

            while(temp.next.next != null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1)||(iPos > iCount))
        {
            System.out.println("Invalid poslition");
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

            iCount--;
        }
    }
}

class SLG
{
    public static void main(String args[])
    {
        SinglyLL<String> obj=new SinglyLL<String>();
        int iRet=0;
        obj.InsertFirst("Dhruvi");
        obj.InsertFirst("Nikita");
        obj.InsertFirst("Sagar");
        obj.InsertLast("Rane");
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.InsertAtPos("Dh",2);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.DeleteFirst();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.DeleteLast();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
        obj.DeleteAtPos(2);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}