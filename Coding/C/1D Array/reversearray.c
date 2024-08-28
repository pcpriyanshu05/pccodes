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
    printf("The array elements in reverse order are ");
    for(i=n-1;i>=0;i--)
    {
       printf("%d\t",a[i]);
    }
return 0;
    
}