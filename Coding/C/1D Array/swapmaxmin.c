#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array ");
    scanf("%d",&n);
    int a[n],i,max,min,t,x=0,y=0;
    printf("Enter the elements of array ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before swapping\n");
    for(i=0;i<=n-1;i++)
        printf("%d\t",a[i]);
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
    t=a[x];
    a[x]=a[y];
    a[y]=t;
    printf("\nArray after swapping\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}