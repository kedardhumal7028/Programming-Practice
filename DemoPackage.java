import java.util.*;
import Keds.Arithmatic;
import Keds.Loops.Loop;

class DemoPackage
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 1st number");
        int A = sobj.nextInt();

        System.out.println("Enter 2nd number");
        int B = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(A, B);

        int ans = aobj.Addition();
        System.out.println("Addition is : "+ans);

        ans = aobj.Substraction();
        System.out.println("Substraction is : "+ans);

        Loop lobj = new Loop();
        lobj.Display();


    }
}