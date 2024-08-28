#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],s=0,i;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        s+=a[i];
    }
    printf("The sum of the array elements is %d",s);
    return 0;

}