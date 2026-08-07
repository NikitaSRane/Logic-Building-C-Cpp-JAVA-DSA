// Write a program which accept matrix and one number from user and returns frequency of that number.
// Input:
// Number: 9
/*
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
 */

// Output: 3

import java.util.*;

class Matrix
{
    public int row;
    public int col;
    public int No;
    public int Arr[][];

    public Matrix(int No1, int No2, int iNo)
    {
        row=No1;
        col=No2;
        No=iNo;
        Arr=new int[row][col];
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  Accept
    // Description: Accepts elements from  user
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the elements:");
        for(int i=0; i< row; i++)
        {
            for(int j=0; j< col; j++)
            {
                Arr[i][j]=sobj.nextInt();

            }
        }
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  Display
    // Description: Display elements of matrix
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    public void Display()
    {
        System.out.println("Elements from matrix are:");

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }


    ///////////////////////////////////////////////
    //
    // Function Name:  Frequency
    // Description: Returns frequency of given element
    // Input Parameter: None
    // Return Value: Integer
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////


    public int Frequency()
    {
        int iCount=0;

        for(int i=0; i< row; i++)
        {
            for(int j=0; j< col; j++)
            {
                if(Arr[i][j] == No)
                {
                    iCount++;
                }

            }
        }

        return iCount;
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  finalize
    // Description: It is used to deallocate the resources
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    protected void finalize()
    {
        System.out.println("Garbage collector will collect the memory of an object");
        Arr=null;
    }
}

class Program48_2
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iNo1=sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iNo2=sobj.nextInt();

        System.out.println ("Enter number that you want to search frequency: ");
        int iNo=sobj.nextInt();

        Matrix mobj=new Matrix(iNo1,iNo2,iNo);
        mobj.Accept();
        mobj.Display();

        System.out.println("Frequency of "+iNo+" is "+mobj.Frequency());

        mobj=null;

        System.gc();

    }
}


