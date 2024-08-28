#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n],i,pos;
    printf("Enter the elements of array ");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the position from where you want to delete the element ");
    scanf("%d",&pos);
    if(pos>=0 && pos<=n)
    {
        for(i=pos-1;i<=n-2;i++)
           a[i]=a[i+1];
    }
    n--;
    printf("The resultant array is\n");
    for(i=0;i<=n-1;i++)
       printf("%d\t",a[i]);
       return 0;    
}