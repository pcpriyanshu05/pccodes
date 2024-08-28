#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],i,e,f=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element whose frequency is to be calculated ");
    scanf("%d",&e);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==e)
          f+=1;
    }
    printf("The frequency of the given element is %d",f);
    return 0;
}