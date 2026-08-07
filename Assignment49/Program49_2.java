// Write a program which accept matrix from user and reverse the contents of each row.
// Input:
/*
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
 */

// Output: 
/*
    9   5   2   3
    2   2   3   4
    9   1   4   8
    5   7   9   3
 */

import java.util.*;

class Matrix
{
    public int row;
    public int col;
    public int Arr[][];

    public Matrix(int No1, int No2)
    {
        row=No1;
        col=No2;
        Arr=new int[row][col];
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  Accept
    // Description: Accepts elements from  user
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:29/07/2024
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
    // Date:29/07/2024
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
    // Function Name:  ReverseRow
    // Description:Reverse the contents of each row
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:29/07/2024
    //
    ///////////////////////////////////////////////


    public void ReverseRow()
    {
        int start=0,end=0, temp=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col ;j++)
            {
                start=0;
                end=col-1;

                while(start < end)
                {
                    temp=Arr[i][start];
                    Arr[i][start]=Arr[i][end];
                    Arr[i][end]=temp;

                    start++;
                    end--;

                }
                
            }
        }
    
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  finalize
    // Description: It is used to deallocate the resources
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:29/07/2024
    //
    ///////////////////////////////////////////////

    protected void finalize()
    {
        System.out.println("Garbage collector will collect the memory of an object");
        Arr=null;
    }
}

class Program49_2
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iNo1=sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iNo2=sobj.nextInt();

        Matrix mobj=new Matrix(iNo1,iNo2);
        mobj.Accept();
        mobj.Display();
        mobj.ReverseRow();
        mobj.Display();
        mobj=null;

        System.gc();

    }
}


