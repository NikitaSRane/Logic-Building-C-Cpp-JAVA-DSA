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

class Stack
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("Object of stack gets created successfully.");

        First=null;
        iCount=0;
    }

    public void Push(int No)// InserFirst()
    {   
        node newn=new node(No);

        if(First== null)
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

        if(First== null)
        {
            System.out.println("Stack is empty.");
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
        System.out.println("Elements of stack are: ");

        node temp=null;

        temp=First;

        while(temp !=null)
        {
            System.out.print("|"+temp.data+"|->");
            temp=temp.next;
        }
        System.out.println("null");
    }
}

class Program435
{
    public static void main(String args[])
    {
        Stack obj=new Stack();  
        int iRet=0; 

        obj.Push(51);
        obj.Push(21);
        obj.Push(11);

        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of elements are: "+iRet);

        iRet=obj.Pop();
        System.out.println("Popped element is: "+iRet);
    }

}