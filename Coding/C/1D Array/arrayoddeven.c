#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n],c=0,s=0,i;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
           c+=1;
        else
           s+=1;
    }
    printf("The no. of even elements is %d and the no. of odd elements is %d",c,s);
    return 0;
}