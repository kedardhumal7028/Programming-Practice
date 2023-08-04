class Maths
{
    public int iNo1;
    public int iNo2;

    public Maths()
    {
        System.out.println("Inside Default constructor");
        iNo1 = 0;
        iNo2 = 0;
    }
    public Maths(int A, int B)
    {
        System.out.println("Inside parameterise Constructor");
        iNo1 = A;
        iNo2 = B;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
}

class Demo
{
    public static void main(String ar[])
    {
        System.out.println("\nInside Main");
        Maths mobj1 = new Maths();
        Maths mobj2 = new Maths(10,11);

        int ret = 0;

        ret = mobj1.Addition();
        System.out.println("Addition is : "+ret);

        ret = mobj2.Addition();
        System.out.println("Addition is : "+ret);
    }
}
