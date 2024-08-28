class key
{
  public  int add()
  {
    System.out.println("in add");
    return 0;
  }

}
public class demo
{
    public static void main(String args[])
    {
     key c=new key();
     int result=c.add();
     System.err.println(result);
    }
}


