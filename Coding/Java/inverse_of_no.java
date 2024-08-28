import java.util.*;
public class inverse_of_no
{
    public static void main(String args[])
    {
      int n,inv=0,op=1;
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter a no.");
      n=sc.nextInt();
      
      while(n!=0)
      {
         int od=n%10;
         int id=op;
         int ip=od;
         inv=inv+id*(int)Math.pow(10,ip-1);
         n=n/10;
         op++;
      }
      System.out.println("The inverse is "+inv);
      sc.close();
    }
}