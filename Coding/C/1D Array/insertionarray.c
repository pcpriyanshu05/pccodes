#include <stdio.h>
int main()
{
    int a[100],n,i,e,pos;
    printf("Enter the length of array ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be inserted and position ");
    scanf("%d %d",&e,&pos);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos-1]=e;
    printf("The resultant array is\n");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
