#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array ");
    scanf("%d",&n);
    int a[n],i,max,min;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>=max)
            max=a[i];
        else if(a[i]<=min)
            min=a[i];
    }