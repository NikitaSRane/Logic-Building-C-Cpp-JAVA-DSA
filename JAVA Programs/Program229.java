import java.util.Scanner;


class ArrayX
{
    public int Arr[];

    public ArrayX(int No)
    {
        Arr= new int[No];
    }    
}

class Program229
{
    public static void main(String args[])
    {
        ArrayX aobj=new ArrayX(5);

        System.out.println("Array size is :"+aobj.Arr.length);
    }
}