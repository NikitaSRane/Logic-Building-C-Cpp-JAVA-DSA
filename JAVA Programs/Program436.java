class node
{
    public int data;
    public node next;
    
    public node(int Value)
    {
        data=Value;
        next=null;
    }
}

class Queue
{
    public node First;
    public int iCount;

    public Queue()
    {
        System.out.println("Object of queue gets created successfully.");

        First=null;
        iCount=0;
    }

    public void EnQueue(int No)// InserLast()
    {   
        node newn=new node(No);

        if(First== null)
        {
            First=newn;
        } 
        else
        {
            node temp=First;

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
        int iValue=0;

        if(First== null)
        {
            System.out.println("Queue is empty.");
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
        System.out.println("Elements of queue are: ");

        node temp=null;

        temp=First;

        while(temp !=null)
        {
            System.out.print(temp.data+"\t");
            temp=temp.next;
        }
        System.out.println();
    }
}

class Program436
{
    public static void main(String args[])
    {
        Queue obj=new Queue();  
        int iRet=0; 

        obj.EnQueue(51);
        obj.EnQueue(21);
        obj.EnQueue(11);

        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);

        iRet=obj.DeQueue();
        System.out.println("Removed element is: "+iRet);
        obj.Display();

    }

}