import java.util.*;

class ArrayUser
{
    public static void main(String arr[])
    {
        int icnt = 0;
        int iSum = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("number of element in array are : "+Arr.length);

        System.out.println("Enter the elements of array are");

        for(icnt = 0; icnt<Arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
            
        }

        System.out.println("elements of array are: ");
        
        for( icnt = 0; icnt<Arr.length; icnt++)
        {
            System.out.println(Arr[icnt]);
        }

        for( icnt = 0; icnt<Arr.length; icnt++)
        {
            iSum = iSum + Arr[icnt];
        }

         System.out.println( "Addition of array is : "+iSum);


    }
}