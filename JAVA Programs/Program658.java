class Employee
{
    public int EId;
    public String EName;
    public String EAddress;
    public int ESalary;

    public Employee(int A, String B,String C, int D)
    {
        this.EId=A;
        this.EName=B;
        this.EAddress=C;
        this.ESalary=D;
    }

    public void Display()
    {
        System.out.println("EID: "+EId+" Name: "+EName+" Address: "+EAddress+" Salary: "+ESalary);
    }
}

class Program658
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");

        Employee eobj1=new Employee(1,"Amit","Pune",11000);
        Employee eobj2=new Employee(2,"Pooja","Satara",15000);
        Employee eobj3=new Employee(3,"Sagar","Kolhapur",20000);


        eobj1.Display();
        eobj2.Display();
        eobj3.Display();
    }
}