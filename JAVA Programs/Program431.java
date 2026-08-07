class node
{
    public int data;
    public node next;
    public node prev;
    
    public node(int Value)
    {
        data=Value;
        next=null;
        prev=null;
    }
}

class DoublyCL
{
    public node First;
    public node Last;
    public int iCount;

    public DoublyCL()
    {
        System.out.println("Object of doubly CL gets created successfully.");

        First=null;
        Last=null;
        iCount=0;
    }

    public void InsertFirst(int No)
    {

    }

    public void Display()
    {

    }

    public void InsertLast(int No)
    {
        
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        
    }
    public void DeleteLast()
    {
        
    }

    public void InsertAtPos(int No,int iPos)
    {
       
    }

    public void DeleteAtPos(int iPos)
    {
       
    }
}

class Program431
{
    public static void main(String args[])
    {
        DoublyCL obj=new DoublyCL();   
    }

}