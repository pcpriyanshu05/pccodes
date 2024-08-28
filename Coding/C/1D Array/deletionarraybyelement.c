#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n],i,e,j;
    printf("Enter the elements of array ");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the element you want to delete ");
    scanf("%d",&e);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==e)
        {
            for(j=i;j<=n-2;j++)
              a[j]=a[j+1];
            n--;
            i--;
        }
    }
   
    printf("The resultant array is\n");
    for(i=0;i<=n-1;i++)
        printf("%d\t",a[i]);
    return 0;
}