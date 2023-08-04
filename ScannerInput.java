import java.util.*;

class ScannerInput
{
    public static void main(String a[])
    {
        String name = "\0";
        int age = 0;
        float mark = 0.00f;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter name : ");
        name = sobj.nextLine();

        System.out.print("Enter age : ");
        age = sobj.nextInt();

        System.out.print("Enter mark : ");
        mark = sobj.nextFloat();

        System.out.println("\nName  : "+name);
        System.out.println("Age   : "+age);
        System.out.println("Marks : "+mark);


    }
}