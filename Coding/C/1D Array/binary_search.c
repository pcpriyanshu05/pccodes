#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array ");
    scanf("%d",&n);
    int a[n],start=0,last=n-1,mid,i,ele,f=0;
    printf("Enter the elements of array ");
    for(i=0;i<=n-1;i++)
       scanf("%d",a[i]);
    printf("Enter the element to be searched ");
    scanf("%d",&ele);
    while(start<=last)
    {
        mid=(start+last)/2;
        if(a[mid]==ele)
        {
            printf("Element %d found at %d position\n",ele,mid+1);
            f=1;
            break;
        }
        else if(a[mid]>ele)
            last=mid-1;
        else
            start=mid+1;
        if(f==0)
           printf("Element not found");
    }
    return 0;
}