import java.util.*;

class Input
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter 1st number :");
        int ino1 = sobj.nextInt();

        System.out.println("Enter 2nd number :");
        int ino2 = sobj.nextInt();

        int ans = 0;

        ans = ino1 + ino2;

        System.out.println("Addition is : "+ans);
    }
}