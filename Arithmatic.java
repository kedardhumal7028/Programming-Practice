package Keds;

public class Arithmatic
{
    public int iValue1;
    public int iValue2;

    public Arithmatic(int ino1, int ino2)
    {
        iValue1 = ino1;
        iValue2 = ino2;
    }

    public int Addition()
    {
        return iValue1 + iValue2;
    }

    public int Substraction()
    {
        return iValue1 - iValue2;
    }
}