
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
        System.out.println(EId+"\t"+EName+"\t"+EAddress+"\t"+ESalary);
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
        System.out.println("-------------------------------------------------");
        System.out.println("EID\tEName\t\tEAddress\t\tESalary");
        System.out.println("-------------------------------------------------");

        for(Employee eref:lobj)
        {
            eref.DisplayInfo();
        }
    }

    // Select * from Emplyee where EID=3;

    public void SelectSpecific(int ID)
    {        
        System.out.println("Information of employee whose EID is: "+ID);
        for(Employee eref:lobj)
        {
            if( ID == eref.EId)
            {
                eref.DisplayInfo();
                break;
            }
        }

    }

    // Select * from Emplyee where EName=3;

    public void SelectSpecific(String name)
    {        
        System.out.println("Information of employee whose Name is: "+name);
        for(Employee eref:lobj)
        {
            if(name.equals(eref.EName))
            {
                eref.DisplayInfo();
            }
        }

    }

    //delete from Employee where EId=3;
    public void DeleteFrom(int id)
    {
        int index=0;
        boolean bFlag=false;

        for(Employee eref:lobj)
        {
            if(id == eref.EId)
            {
                bFlag=true;
                break;
            }
            index++;

        }
        if(bFlag==false)
        {
            System.out.println("Unable to delete the element as given id is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // delete from Employee where name=sagar;

    public void DeleteFrom(String name)
    {
        boolean bFlag=false;
        int index=0;
        for(Employee eref:lobj)
        {
            if(name.equals(eref.EName))
            {
                bFlag=true;
                break;
            }
            index++;
        }
        if(bFlag==false)
        {
            System.out.println("Unable to delete the element as given name is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    //select Sum(ESalary) from Employee;

    public void AggregateSum()
    {
        int iSum=0;

        for(Employee eref:lobj)
        {
            iSum=iSum+eref.ESalary;
        }
        System.out.println("Summation of salary: "+iSum);
    }

    //select max(ESalary) from Employee;

    public void AggregateMax()
    {        
        int iMax=0;

        for(Employee eref:lobj)
        {
            if(eref.ESalary > iMax)
            {
                iMax=eref.ESalary;
            }
        }
        System.out.println("Maximum Salary: "+iMax);

    }

    //select min(ESalary) from Employee;

    public void AggregateMin()
    {     

        Employee temp=lobj.get(0);   
        int iMin=temp.ESalary;

        for(Employee eref:lobj)
        {
            if(eref.ESalary < iMin)
            {
                iMin=eref.ESalary;
            }
        }
        System.out.println("Minimum Salary: "+iMin);

    }


}

class Program676
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
        mobj.DeleteFrom("Pooja Patil");
        mobj.SelectStar();
        mobj.AggregateSum();
        mobj.AggregateMax();
        mobj.AggregateMin();
    }
}