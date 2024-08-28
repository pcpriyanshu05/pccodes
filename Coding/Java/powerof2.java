import java.util.*;
class powerof2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a no.");
        int n=sc.nextInt();
        int count=0;
        while(n>0)
        {
            int lb=n%2;
            if(lb==1)
              count++;
            n=n/2;
        }
        if(count==1)
           System.out.println("Yes");
        else
           System.out.println("No");
        sc.close();
    }
}