#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array ");
    scanf("%d",&n);
    int a[n],i,max,min,x=0,y=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            x=i;
        }
        else if(a[i]<=min)
        {
           min=a[i];
           y=i;
        }
            
    }
    printf("The maximum element in the array is %d at position %d and the minimum element in the array is %d at position %d",max,x+1,min,y+1);
    return 0;
}