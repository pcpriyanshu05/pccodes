
import java.util.Scanner;
public class scanner_class_in_java
{
    public static void main(String args[])
    {
        System.out.println("Taking input from user");
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number 1");
        String a=sc.next();
        boolean b1=sc.hasNext();
        System.out.println(b1);
        System.out.println("Enter number 2");
        String b=sc.next();
        boolean b2=sc.hasNext();
        System.out.println(b2);
        String sum=a+b;
        System.out.println("The sum of these numbers is");
        System.out.println(sum);
        sc.close();
    }
}