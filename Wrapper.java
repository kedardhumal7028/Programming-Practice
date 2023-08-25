class Wrapper
{
    public static void main(String a[])
    {
        int no = 11;

        Integer iobj = new Integer(no);

        System.out.println(no);
        System.out.println(iobj); //premetive  to wrapper

        int x = iobj;
        System.out.println(x);    //Wrapper to Premetive
    }
}