
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
        System.out.println("------------------------------------------------------------------");
        System.out.println("EID\tEName\t\tEAddress\t\tESalary");
        System.out.println("------------------------------------------------------------------");

        for(Employee eref:lobj)
        {
            eref.DisplayInfo();
        }
        System.out.println("------------------------------------------------------------------");

    }

    // Select * from Emplyee where EID=3;

    public void SelectSpecific(int ID)
    {        
        System.out.println("Information of employee whose EID is: "+ID);
        System.out.println("------------------------------------------------------------------");

        for(Employee eref:lobj)
        {
            if( ID == eref.EId)
            {
                eref.DisplayInfo();
                break;
            }
        }
        System.out.println("------------------------------------------------------------------");


    }

    // Select * from Emplyee where EName=3;

    public void SelectSpecific(String name)
    {        
        System.out.println("Information of employee whose Name is: "+name);
        System.out.println("------------------------------------------------------------------");

        for(Employee eref:lobj)
        {
            if(name.equals(eref.EName))
            {
                eref.DisplayInfo();
            }
        }
        System.out.println("------------------------------------------------------------------");

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

    //select Avg(ESalary) from Employee;

    public void AggregateAvg()
    {
        int iSum=0;
        int Avg=0;

        for(Employee eref:lobj)
        {
            iSum=iSum+eref.ESalary;
        }
        Avg=iSum / lobj.size();
        System.out.println("Average of salary: "+Avg);
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
    //select count(ESalary) from Employee;
    public void AggregateCount()
    {        
        System.out.println("Number of Employees: "+lobj.size());
    }
}

class Program679
{
    public static void main(String args[])
    {
        System.out.println("----------------Database Management System--------------------");
        Scanner sobj=new Scanner(System.in);
        int iOption=0, sal=0,eid=0,iRet=0;
        String name,address;
        MarvellousDBMS mobj=new MarvellousDBMS();

        while(true)
        {
            System.out.println("------------------------------------------------------------------");
            System.out.println("Please select your choice based on your requirement:");
            System.out.println("------------------------------------------------------------------");
            System.out.println("1. Insert new record into the table");
            System.out.println("2. Display all records");
            System.out.println("3. Display all records having specific EId");
            System.out.println("4. Display all records having specific EName");
            System.out.println("5. Delete record having specific EId");
            System.out.println("6. Delete record having specific EName");
            System.out.println("7. Display Sum of salary");
            System.out.println("8. Display Average of salary");
            System.out.println("9. Display Maximum of salary");
            System.out.println("10. Display Minimum of salary");
            System.out.println("11. Display number of employee");
            System.out.println("12. Display Help");
            System.out.println("13. Display About");
            System.out.println("14. Terminate the DBMS");
            System.out.println("------------------------------------------------------------------");
            System.out.println("Enter your choice:");


            iOption=sobj.nextInt();

            switch(iOption)
            {
                //1. Insert new record into the table
                case 1:
                    System.out.println("Please enter the information of employee");
                    System.out.println("Enter the employee name:");
                    sobj.nextLine();
                    name=sobj.nextLine();

                    System.out.println("Enter the employee address:");
                    address=sobj.nextLine();

                    System.out.println("Enter the employee salary:");
                    sal=sobj.nextInt();

                    mobj.InsertintoTable(name,address,sal);
                    break;

                //2. Display all records
                case 2:
                    mobj.SelectStar();
                    break;

                //3. Display all records having specific EId
                case 3:
                    System.out.println("Please enter the employee id whose information that you want to display");
                    eid=sobj.nextInt();
                    mobj.SelectSpecific(eid);
                    break;

                //4. Display all records having specific EName
                case 4:
                    System.out.println("Please enter the employee name whose information that you want to display");
                    sobj.nextLine();
                    name=sobj.nextLine();
                    mobj.SelectSpecific(name);
                    break;

                //5. Delete record having specific EId
                case 5:
                    System.out.println("Please enter the employee id whose information that you want to delete");
                    eid=sobj.nextInt();
                    mobj.DeleteFrom(eid);
                    break;

                //6. Delete record having specific Name
                case 6:
                    System.out.println("Please enter the employee name whose information that you want to delete");
                    sobj.nextLine();

                    name=sobj.nextLine();
                    mobj.DeleteFrom(name);
                    break;

                //7. Display Sum of salary
                case 7:
                    mobj.AggregateSum();
                    break;

                //8. Display Average of salary
                case 8:
                    mobj.AggregateAvg();
                    break;

                //9. Display Maximum of salary
                case 9:
                    mobj.AggregateMax();
                    break;

                //10. Display Minimum of salary
                case 10:
                    mobj.AggregateMin();
                    break;

                //11.Display number of employee
                case 11:
                    mobj.AggregateCount();
                    break;
                
                //12. Help
                case 12:
                    System.out.println("This project implements the DBMS for employee records");
                    System.out.println("We implement all SQL queries");
                    System.out.println("All data gets stored in Data structres");
                    System.out.println("Complete implemenrtation is on Primary storage");
                   
                    break;

                //13. About
                case 13:
                    System.out.println("This project developed by Marvellous Infosystems");
                    System.out.println("All copyrights reserved..");
                    break;

                //14. Exit
                case 14:
                    System.out.println("Thank you for using Marvellous DBMS");
                    mobj=null;
                    System.gc();
                    System.exit(0);
                    break;

            }


        }

    }
}