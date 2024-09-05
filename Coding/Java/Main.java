//Program for binary search
public class Main{
     public static int binary_search(int arr[],int k)
    {
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int mid=(start+end)/2;
            if(k==arr[mid]){
               return mid;
            }
            else if(k<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
    }
    public static void main(String args[])
    {
        int arr[];
        arr=new int[5];
        for(int i=0;i<arr.length;i++){
            arr[i]=2*i;
        }
        for(int ele:arr){
            System.out.println(ele);
        }
        System.out.println(binary_search(arr,2));
    }
}