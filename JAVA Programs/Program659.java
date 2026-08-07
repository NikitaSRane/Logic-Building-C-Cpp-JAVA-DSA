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

    public void Display()
    {
        System.out.println("EID: "+EId+" Name: "+EName+" Address: "+EAddress+" Salary: "+ESalary);
    }
}

class Program659
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");

        Employee eobj1=new Employee("Amit","Pune",11000);
        Employee eobj2=new Employee("Pooja","Satara",15000);
        Employee eobj3=new Employee("Sagar","Kolhapur",20000);
        Employee eobj4=new Employee("Rahul","Nasik",21000);


        eobj1.Display();
        eobj2.Display();
        eobj3.Display();
        eobj4.Display();

    }
}