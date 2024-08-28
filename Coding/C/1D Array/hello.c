#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    for ( i=0; i <=n-1; i++)
    {
        
        scanf("%d",a[i]);
    }
    for ( i=0; i<=n-1; i++)
    {
        printf("%d",a[i]);
    }
    
    
}