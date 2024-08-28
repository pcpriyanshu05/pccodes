import java.util.*;
class check_no_of_setbits_in_a_no
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a no.");
        int n=sc.nextInt();
        int count=0;
        while(((n) &(n-1))!=0)
        {
          count++;
        }
        System.out.println("no. of setbits is= "+count);
        sc.close();
        
}
}