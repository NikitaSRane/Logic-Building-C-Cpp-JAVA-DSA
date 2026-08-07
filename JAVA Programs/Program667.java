
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

    // insert into Employee values(1,"Sagar","pune",11000);

    public void InsertintoTable(String name, String address, int Salary)
    {
        Employee eobj=new Employee(name,address,Salary);
        lobj.add(eobj);
    }

    // Select * from Employee;

    public void SelectStar()
    {
        System.out.println("Data from the Employee database.");

        for(Employee eref:lobj)
        {
            eref.DisplayInfo();
        }
    }
}

class Program667
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");

        MarvellousDBMS mobj=new MarvellousDBMS();
        mobj.InsertintoTable("Sagar Rane","Karve road, Pune 4",11000);
        mobj.InsertintoTable("Amit Vaidya","sector 5, Mumbai",15000);
        mobj.InsertintoTable("Pooja Patil","Temple lane,Kolhapur",20000);
        mobj.InsertintoTable("Nikita Kubla","MGM road,Nasik",25000);
        mobj.InsertintoTable("Dhruvi Rane","FC Road,Satara",30000);
        mobj.SelectStar();
    }
}