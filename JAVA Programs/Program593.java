// string validations
class Program593
{
    public static void main(String args[])
    {
        String abc="abc";   //allowed
        System.out.println(abc);

        String xyz=new String("xyz asdf");   // allowed
        System.out.println(xyz);

        //char Arr[]={"1","2"};  // NA as string not converted to char

        char Arr[]={'1','2'};   //allowed
        System.out.println(Arr);

        //char ls[]={'Hi','Hello'}; // NA

        String Brr=new String(Arr); //allowed passing character array to string
        System.out.println(Brr);

        String c="abc".substring(2,3);// new string from existing string
        String d=abc.substring(1,3);
        System.out.println(c);
        System.out.println(d);

        char ch[]=xyz.toCharArray(); // allowed
        System.out.println(ch);
        for(int i=0;i<ch.length;i++)// array propery
        {
            System.out.println(ch[i]);
        }

    }
}