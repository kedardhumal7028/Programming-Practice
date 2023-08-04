import java.util.*;

class ArrayUser1
{
    public static void main(String arg[])
    {
       int icnt = 0;
        int iSum = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("number of element in array are : "+Arr.length);

        System.out.println("Enter the elements of array : ");

        for(icnt = 0; icnt<iSize; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }

        System.out.println("Elements of array are :");
        {
            for(icnt = 0; icnt<iSize; icnt++)
            {
                System.out.println(Arr[icnt]);
            }
        }

        for(icnt = 0; icnt<iSize; icnt++)
        {
            iSum = iSum + Arr[icnt];
            
        }
          System.out.println("Addition is : "+ iSum);

    }
}



        