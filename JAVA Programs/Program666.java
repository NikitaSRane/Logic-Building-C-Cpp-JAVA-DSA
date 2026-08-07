
import java.util.*;

class Employee
{
    public int EId;
    public String EName;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static
    {
        Counter=0;
    }

    public Employee(String B,String C, int D)
    {
        this.EId=++Counter;
        this.EName=B;
        this.EAddress=C;
        this.ESalary=D;
    }

    public void DisplayInfo()
    {
        System.out.println("EID: "+EId+" Name: "+EName+" Address: "+EAddress+" Salary: "+ESalary);
    }
}

class MarvellousDBMS
{
    public LinkedList<Employee> lobj;
    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started successfully.");

        lobj=new LinkedList<Employee>();
    }
}

class Program666
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");

        MarvellousDBMS mobj=new MarvellousDBMS();


    }
}