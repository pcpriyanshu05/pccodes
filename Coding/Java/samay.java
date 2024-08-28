import java.util.*;
public class samay
{
    public static void DatePlay()
    {
        Date d=new Date();
        System.out.println("The current date using Date class is "+d);
    }
    public static void CalPlay()
    {
        Calendar c=Calendar.getInstance();
        System.out.println("The current date using Calendar Class is "+(c.get(Calendar.MONTH)+1)+"/"+c.get(Calendar.DATE)+"/"+c.get(Calendar.YEAR));
    }
    public static void main(String args[])
    {
        DatePlay();
        CalPlay();
    }
}