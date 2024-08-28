#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array");
    for( int i=0;i<=sizeof(a)/sizeof(a[0])-1;i++)
          printf("%d\t",a[i]);
    return 0;
     
}