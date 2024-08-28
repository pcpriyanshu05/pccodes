#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of array are:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}