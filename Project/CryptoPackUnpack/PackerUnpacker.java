// Packer Unpacker application in java allows all files + encryption

import java.util.Scanner;
import java.io.*;

/////////////////////////////////////////////////////
//
//  Class Name: PackerUnpacker
//  Description: It is used to packing and unpacking files.
//  Author: Nikita Sagar Rane
//  Date: 17/07/2024
//
////////////////////////////////////////////////////

class PackerUnpacker
{

/////////////////////////////////////////////////////
//
//  Method Name: packer
//  Input Arguments: String
//  Description: It is used to packing files.
//  Author: Nikita Sagar Rane
//  Date: 17/07/2024
//
////////////////////////////////////////////////////

    public static void packer(String ext) throws IOException
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the name of directory that you want to open for packing: ");
        String FolderName=sobj.nextLine();

        File fobj=new File(FolderName);

        if(fobj.exists()) // if directory exists
        {
            int i=0, matchFile=0;
            File Arr[]=fobj.listFiles(); // array of files created
            for(i=0;i<Arr.length;i++)
            {
                if(ext.isEmpty() || Arr[i].getName().endsWith(ext))
                {
                    matchFile++;
                }
            }

            if(matchFile == 0)
            {
                System.out.println("No files found with extension "+ext);
                return;
            }
            System.out.println("Enter the name of packed file that you want to create: ");
            String PackedFile=sobj.nextLine();

            File Packobj=new File(PackedFile);

            Boolean bret=Packobj.createNewFile();

            if(bret==false)
            {
                System.out.println("Unable to create packed file");
                return;
            }
            System.out.println("Packer file has been created successfully with name: "+Packobj.getName());

            FileOutputStream foobj=new FileOutputStream(Packobj); // for writing file
            FileInputStream fiobj=null; // for reading file

            int j=0,iCount=0,iRet=0;
            String Header=null;

            byte buffer[]=new byte[1024]; // byte array created for reading
            byte encrypt='*';
            for(i=0;i<Arr.length;i++)
            {
                Header=Arr[i].getName();
                if(Header.endsWith(ext))
                {
                    iCount++; // counting files
                    Header=Header +" "+Arr[i].length(); // file_name size_of_file

                    for(j=Header.length();j< 100; j++)
                    {
                        Header=Header+" ";  // file_name size_of_file+ empty bytes till 100 bytes
                    }
                    // 100 bytes size header created
                    foobj.write(Header.getBytes(),0,100); // convert string to bytes from offset 0 to 100 and write

                    fiobj=new FileInputStream(Arr[i]); // for reading file

                    while((iRet=fiobj.read(buffer))!= -1) // read till end of file ie. -1
                    {
                        int k=0;
                        byte brr[]=new byte[iRet];
                        for(k=0;k<iRet;k++)
                        {
                            brr[k]=(byte)(buffer[k]^encrypt);
                        }
                        foobj.write(brr,0,iRet); // write from offset 0 to size of buffer ie. 1024
                    }
                    fiobj.close(); 
                }

            }

            System.out.println("Packing activity completed.");
            System.out.println("Number of files scanned : "+Arr.length);
            System.out.println("Number of files packed: "+iCount);
            foobj.close();
        }
        else
        {
            System.out.println("There is no such directory");
            return;
        }
    }

/////////////////////////////////////////////////////
//
//  Method Name: packer
//  Description: It is used to packing files.
//  Author: Nikita Sagar Rane
//  Date: 17/07/2024
//
////////////////////////////////////////////////////

public static void packer()throws IOException
{
    packer("");
}

/////////////////////////////////////////////////////
//
//  Method Name: unpacker
//  Description: It is used to unpacking files.
//  Author: Nikita Sagar Rane
//  Date: 17/07/2024
//
////////////////////////////////////////////////////

    public static void unpacker() throws IOException
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the name of packed file that you want to open for unpacking: ");
        String PackedFile=sobj.nextLine();

        File fobj=new File(PackedFile);

        if(!fobj.exists())
        {
            System.out.println("Unable to proceed as packed file is missing..");
            return;
        }

        FileInputStream fiobj=new FileInputStream(fobj); // reading file

        byte Header[]=new byte[100]; // empty byte array created
        int iRet=0,iCount=0,FileSize=0;
        String HeaderX=null;
        File obj=null;
        FileOutputStream foobj=null;
        byte decrypt='*';
        while((iRet=fiobj.read(Header,0,100))> 0) // read header in byte format from offset 0 to 100
        {
            HeaderX=new String(Header); // convert to string format
            HeaderX=HeaderX.trim(); // remove unwanted whitespace

            String Tokens[]=HeaderX.split(" "); // array created to store file_name and size_of_filename

            obj=new File(Tokens[0]); 
            obj.createNewFile();
            System.out.println("File created with name: "+Tokens[0]);
            iCount++; // counting files
            FileSize=Integer.parseInt(Tokens[1]); // convert string to integer
            byte Buffer[]=new byte[FileSize]; // empty byte array created with filesize

            fiobj.read(Buffer,0,FileSize); // reading file till filesize
            int k=0;
            byte brr[]=new byte[FileSize];
            for(k=0;k<FileSize;k++)
            {
                brr[k]=(byte)(Buffer[k]^decrypt);
            }
            foobj=new FileOutputStream(obj); // for writing file
            foobj.write(brr,0,FileSize); // write to file 
            foobj.close();
        }
        fiobj.close();
        System.out.println("Unpacking activity completed");
        System.out.println("Number of files unpacked are : "+iCount);

    }


/////////////////////////////////////////////////////
//
//  Method Name: main
//  Description: Entry point function where program starts execution
//  Author: Nikita Sagar Rane
//  Date: 17/07/2024
//
////////////////////////////////////////////////////
    public static void main(String args[])
    {
        try
        {
            Scanner sobj=new Scanner(System.in);
            int iChoice=0;
            System.out.println("------------Welcome to the Packer Unpacker application---------------");

                do
                {
                    System.out.println("------Menu------");
                    System.out.println("1. Packer");
                    System.out.println("2. Unpacker");
                    System.out.println("3. Help");
                    System.out.println("4. Exit");
                    System.out.print("Enter your choice: ");
                    iChoice=sobj.nextInt();

                    switch(iChoice)
                    {
                        case 1:
                            System.out.println("Select choice: ");
                            System.out.println("1. For .txt");
                            System.out.println("2. For .pdf");
                            System.out.println("3. For .exc");
                            System.out.println("4. For .doc");
                            System.out.println("5. Other");
                            System.out.println("6. All");
                            System.out.print("Enter your choice: ");
                            int iValue=sobj.nextInt();
                            String str=null;
                            switch(iValue)
                            {
                                case 1:
                                    PackerUnpacker.packer(".txt");
                                    break;

                                case 2:
                                    PackerUnpacker.packer(".pdf");
                                    break;

                                case 3:
                                    PackerUnpacker.packer(".exc");
                                    break;

                                case 4:
                                    PackerUnpacker.packer(".doc");
                                    break;

                                case 5:
                                    System.out.println("Enter file extension: ");
                                    sobj.nextLine();  
                                    str=sobj.nextLine();
                                    PackerUnpacker.packer(str);
                                    break;

                                case 6:
                                    PackerUnpacker.packer();
                                    break;
                                
                                default:
                                    System.out.println("Invalid choice. Please try again.");
                            }
                            
                        break;

                        case 2:
                            PackerUnpacker.unpacker();
                        break;

                        case 3:
                            System.out.println("Press 1 for packing activity.");
                            System.out.println("Press 2 for unpacking activity.");
                            System.out.println("Press 3 for help.");
                            System.out.println("Press 4 for exit application.");
                        break;

                        case 4:
                            System.out.println("Thank you for using packer unpacker application.");
                        break;

                        default:
                            System.out.println("Invalid choice. Please try again.");
                    }
                }
                while(iChoice != 4);   
        }
        catch(Exception e)
        {
            System.out.println("Something went wrong. "+e.getMessage());
        }
        
    }
}