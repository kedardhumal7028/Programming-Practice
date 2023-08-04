
package Keds.Loops;

public class Loop
{
    public void Display()
    {
        int Arr[] = new int[4];

        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 30;
        Arr[3] = 40;

        System.out.println("Elements of array is : ");

        for(int icnt = 0; icnt<Arr.length; icnt++)
        {
            System.out.println(Arr[icnt]);
        }
        
    }
}