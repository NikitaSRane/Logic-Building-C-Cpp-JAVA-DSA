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
    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started successfully.");
    }
}

class Program664
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");

        MarvellousDBMS mobj=new MarvellousDBMS();

        LinkedList <Employee>lobj=new LinkedList<Employee>();

        Employee eobj1=new Employee("Sagar","Pune",21000);
        Employee eobj2=new Employee("Pooja","Satara",51000);

        lobj.add(eobj1);
        lobj.add(eobj2);

    }
}