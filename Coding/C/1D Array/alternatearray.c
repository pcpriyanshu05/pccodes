#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of array in alternate order are");
    for(i=0;i<=n-1;i+=2)
    {
       printf("%d\t",a[i]);
    }
    return 0;
}