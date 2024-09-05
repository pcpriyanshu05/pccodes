//Note-Whenever we try to modify a string ,the string never changes instead it starts pointing to a new object.
//A string is an object which is an array of characters terminated by a null chararcter.
//In arrays in java length is a property while in strings in java it's a function.
public class Mystring{
    public static void main(String args[])
    {
        // String str1="Hello";
        // String str2="Hi";
        // String str3=str1+str2;
        // String str4=str1.concat(str2)
        // System.out.println(str1.compareTo(str2));
        // System.out.println(str.length());
        // System.out.println(str.charAt(2));
        //------------------------------------
        //Comparing strings
        // if(str1==str2)
        // {
        //     System.out.println("Equal");
        // }
        // else{
        //     System.out.println("Not Equal");
        // }
        //---------------------------------------
        // if(str1.equals(str2))
        //   System.out.println("Equal");
        // else
        //   System.out.println("Not equal");
        //---------------------------------------
        //Ignoring the case
        // if(str1.equalsIgnoreCase(str2))
        //    System.out.println("Equal");
        // else
        //    System.err.println("Not equal");
        //-----------------------------------------
        //Lexicographic comparison of two strings
        // System.out.println(str1.compareTo(str2));
        //------------------------------------------
        // String str1=new String("Hello");
        // System.out.println(str instanceof String);
        // System.out.println(str1 instanceof String);
        //-------------------------------------------
        //Wap to check if a string is palindrome or not
        String str="nitin";
        String str1="";
        for(int i=str.length()-1;i>=0;i--)
        {
            str1=str1+str.charAt(i);
            
        }
        // System.out.println(str1);

        if (str.equals(str1)){
            System.out.println("equal");
        }
        else{
            System.out.println("not equal");
        }
        
    }
}
