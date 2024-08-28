#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],i,s=0,m=1;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
           s+=a[i];
        else
           m*=a[i];
    }
    printf("The sum of even elements is %d and the product of odd element is %d",s,m);
    return 0;
}