#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],i,t=0,e;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched ");
    scanf("%d",&e);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==e)
        {
            t=1;
            printf("Element %d found at postion %d",e,i+1);
            break;
        }
    }
    if(t==0)
       printf("Element %d not found",e);
    return 0;
}