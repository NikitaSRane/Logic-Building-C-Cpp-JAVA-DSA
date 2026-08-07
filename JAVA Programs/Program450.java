// Doubly Linear linkedlist in Java

/////////////////////////////////////////////////////
//
//  Class Name: node
//  Description: It is used for Doubly Linear linkedlist
//  Author: Nikita Sagar Rane
//  Date: 06/07/2024
//
////////////////////////////////////////////////////

class node
{
    public int data;
    public node next; // reference of class node
    public node prev;

    public node(int iValue) // parameterized constructor
    {
        data=iValue;
        next=null;
        prev=null;
    }
}

/////////////////////////////////////////////////////
//
//  Class Name: DoublyLL
//  Description: It is used to hold elements for doubly linear linkedlist
//  Author: Nikita Sagar Rane
//  Date: 06/07/2024
//
////////////////////////////////////////////////////

class DoublyLL
{
    private node First; // reference of node class
    private node Last;
    private int iCount; // it counts element in node

    /////////////////////////////////////////////////////
    //
    //  Function Name: DoublyLL
    //  Description: It is used to initialize resources
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024
    //
    ////////////////////////////////////////////////////

    public DoublyLL()
    {
        First=null;
        iCount=0;
    }
    //  There is no such concept of destructor like c++ as in java there is garbage collector.

    /////////////////////////////////////////////////////
    //
    //  Function Name: Display
    //  Description: It is used to display all linkedlist elements on screen
    //  Parameters: None
    //  Return type: Integer
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024
    //
    ////////////////////////////////////////////////////
    public void Display() 
    {
        System.out.print("null");
        node temp=First;

        while(temp != null)
        {
            System.out.print("<=>| "+temp.data +" |");
            temp=temp.next;
        }
        System.out.println("<=>null");
    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: Count
    //  Description: It is used to count all linkedlist elements
    //  Parameters: None
    //  Return type: Integer
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024
    //
    ////////////////////////////////////////////////////
    public int Count()
    {
        return iCount;
    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: InsertFirst
    //  Description: It is used to insert new element at first position of linked list
    //  Parameters: Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty then crete new element at first position.
    //  else if linkedlist contains more than one element then create new element at first position.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void InsertFirst(int No)
    {
        node newn; // reference of node class;
        newn=new node(No);

        if( First == null)
        {
            First=newn;
        }
        else if(First != null)
        {
            newn.next=First;
            First.prev=newn;
            First=newn;
        }
            iCount++;
    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: InsertLast
    //  Description: It is used to insert new element at last position of linked list
    //  Parameters: Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty then crete new element at last position.
    //  else if linkedlist contains more than one element then create new element at last position.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void InsertLast(int No)
    {        
        node newn; // reference of node class;
        newn=new node(No);

        if( First == null)
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
            newn.prev=temp;
        }
            iCount++;

    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: InsertAtPos
    //  Description: It is used to insert new element at given position of linked list
    //  Parameters: Integer,Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if position is invalid then return back.
    //  if given position is one then call InsertFirst().
    //  else if given position is greater than number of elements by one then call InsertLast()
    //  else create a new node at given position.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////

    public void InsertAtPos(int No, int iPos)
    {
        if(iPos < 1 || iPos >  iCount +1)
        {
            System.out.println("Invalid position.\n");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            node newn; // reference of node class;
            newn=new node(No);
            node temp=First;
            int i=0;

            for(i=1;i<iPos-1;i++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            newn.next.prev=newn;
            newn.prev=temp;
            temp.next=newn;
            iCount++;
        }

    }
    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteFirst
    //  Description: It is used to delete first element of linked list
    //  Parameters: None
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty, return back.
    //  if linkedlist contains one element then delete element and set to null.
    //  else if it contains more than one element then delete first element and set next position to linkedlist.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("Linkedlist is empty.");
            return;
        }
        if(First.next==null)
        {
            First=null;
        }
        else
        {
            First=First.next;
            First.prev=null;
        }
        iCount--;
    }
    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteLast
    //  Description: It is used to delete last element of linked list
    //  Parameters: None
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty, return back.
    //  if linkedlist contains one element then delete element and set to null.
    //  else if it contains more than one element then delete last element using traversal.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteLast()
    {
        if(First == null)
        {
            System.out.println("Linkedlist is empty.");
            return;
        }
        if(First.next == null)
        {
            First=null;
        }
        else
        {
            node temp=First;

            while(temp.next.next != null)
            {
                temp=temp.next;
            }

            temp.next=null;
        }
        iCount--;
    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteAtPos
    //  Description: It is used to delete last element of linked list
    //  Parameters: Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 06/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if position is invalid then return back.
    //  if given position is one then call  DeleteFirst().
    //  else if given position is last element then call DeleteLast()
    //  else delete node at given position.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos >  iCount)
        {
            System.out.println("Invalid position.\n");
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
            node temp1=First;
            node temp2=null;

            int i=0;

            for(i=1;i<iPos-1;i++)
            {
                temp1=temp1.next;
            }
            
            temp2=temp1.next;
            temp1.next=temp2.next;
            temp2.next=temp1;

            iCount--;
        }
    }
}

/////////////////////////////////////////////////////
//
// Class Name: Program500
// Description: It manages the linkedlist.
// Author: Nikita Sagar Rane
// Date: 06/07/2024
//
////////////////////////////////////////////////////

class Program450
{
    public static void main(String args[])
    {
        DoublyLL sobj=new DoublyLL();
        int iRet=0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

        sobj.InsertAtPos(105,5);

        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

        sobj.DeleteFirst();

        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

        sobj.DeleteLast();
        sobj.Display();

        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);

        sobj.DeleteAtPos(3);
        sobj.Display();

        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}
