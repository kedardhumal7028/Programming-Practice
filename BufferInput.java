import java.io.*;

class BufferInput
{
    public static void main(String a[]) throws Exception
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        String name;
        int age = 0;
        float mark = 0.0f;

        System.out.print("Enter your Name : ");
        name = bobj.readLine();

        System.out.print("Enter your age : ");
        age = Integer.parseInt(bobj.readLine());

        System.out.print("Enter your marks : ");
        mark = Float.parseFloat(bobj.readLine());

        System.out.println("\nName  : "+name);
        System.out.println("Age   : "+age);
        System.out.println("Marks : "+mark);

    }
}