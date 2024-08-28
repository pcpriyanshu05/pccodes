import java.util.Scanner;
public class palindrome 
{
   public static void main(String args[])
   {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a no.");
    int n=sc.nextInt();
    int r,rv=0,t;
    t=n;
    while(n>0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    if(rv==t)
      System.out.println("Palindrome");
    else
    System.out.println("Not Palindrome");
    sc.close();
   }
}
