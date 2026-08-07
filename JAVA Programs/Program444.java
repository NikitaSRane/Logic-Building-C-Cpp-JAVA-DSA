// Singly Circular linkedlist in Java

/////////////////////////////////////////////////////
//
//  Class Name: node
//  Description: It is used for singly circular linkedlist
//  Author: Nikita Sagar Rane
//  Date: 05/07/2024
//
////////////////////////////////////////////////////

class node
{
    public int data;
    public node next; // reference of class node

    public node(int iValue) // parameterized constructor
    {
        data=iValue;
        next=null;
    }
}

/////////////////////////////////////////////////////
//
//  Class Name: SinglyCL
//  Description: It is used to hold elements for singly circular linkedlist
//  Author: Nikita Sagar Rane
//  Date: 05/07/2024
//
////////////////////////////////////////////////////

class SinglyCL
{
    public node First; // reference of node class
    public node Last;
    public int iCount; // it counts element in node

    /////////////////////////////////////////////////////
    //
    //  Function Name: SinglyCL
    //  Description: It is used to initialize resources
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024
    //
    ////////////////////////////////////////////////////

    public SinglyCL()
    {
        First=null;
        Last=null;
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

    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: Count
    //  Description: It is used to count all linkedlist elements
    //  Parameters: None
    //  Return type: Integer
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024
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
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty then crete new element at first position.
    //  Maintain circular nature by setting address of first element in next reference.
    //  else if linkedlist contains more than one element then create new element at first position.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void InsertFirst(int No)
    {
        node newn; // reference of node class;
        newn=new node(No);

        if( First == null && Last == null)
        {
            First=newn;
            Last=newn;
        }
        else if(First != null)
        {
            newn.next=First;
            First=newn;
        }
            Last.next=First;
            iCount++;
    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: InsertLast
    //  Description: It is used to insert new element at last position of linked list
    //  Parameters: Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty then crete new element at last position.
    //  Maintain circular nature by setting address of first element in next reference.
    //  else if linkedlist contains more than one element then create new element at last position.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void InsertLast(int No)
    {        
        node newn; // reference of node class;
        newn=new node(No);

        if( First == null && Last == null)
        {
            First=newn;
            Last=newn;
        }
        else
        {
            Last.next=newn;
            Last=newn;
        }
            Last.next=First;
            iCount++;

    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: InsertAtPos
    //  Description: It is used to insert new element at given position of linked list
    //  Parameters: Integer,Integer
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if position is invalid then return back.
    //  if given position is one then call InsertFirst().
    //  else if given position is greater than number of elements by one then call InsertLast()
    //  else create a new node at given position.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we insert new element it increases value of iCount variable.
    //
    ////////////////////////////////////////////////////

    public void InsertAtPos(int No, int iPos)
    {
        

    }
    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteFirst
    //  Description: It is used to delete first element of linked list
    //  Parameters: None
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty, return back.
    //  if linkedlist contains one element then delete element and set to null.
    //  else if it contains more than one element then delete first element and set next position to linkedlist.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteFirst()
    {

    }
    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteLast
    //  Description: It is used to delete last element of linked list
    //  Parameters: None
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if linkedlist is empty, return back.
    //  if linkedlist contains one element then delete element and set to null.
    //  else if it contains more than one element then delete last element using traversal.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteLast()
    {

    }

    /////////////////////////////////////////////////////
    //
    //  Function Name: DeleteAtPos
    //  Description: It is used to delete last element of linked list
    //  Parameters: None
    //  Return type: None
    //  Author: Nikita Sagar Rane
    //  Date: 05/07/2024 
    //
    ////////////////////////////////////////////////////
    //
    //  Algorithm
    //  if position is invalid then return back.
    //  if given position is one then call  DeleteFirst().
    //  else if given position is last element then call DeleteLast()
    //  else delete node at given position.
    //  Maintain circular nature by setting address of first element in next reference of last element.
    //  if we delete element it decreases value of iCount variable.
    //
    ////////////////////////////////////////////////////
    public void DeleteAtPos(int iPos)
    {

    }
}

/////////////////////////////////////////////////////
//
// Class Name: Program442
// Description: It manages the linkedlist.
// Author: Nikita Sagar Rane
// Date: 05/07/2024
//
////////////////////////////////////////////////////

class Program444
{
    public static void main(String args[])
    {
        SinglyCL sobj=new SinglyCL();
        int iRet=0;


        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        iRet=sobj.Count();
        System.out.println("Number of elements are: "+iRet);
    
    }
}
