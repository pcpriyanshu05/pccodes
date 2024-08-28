#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,n,c=0;
    printf("Enter the no of students ");
    scanf("%d",&n);
    printf("Enter the marks of %d students ",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<=n-1;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
            }
            b[i]=c;
        }
       
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=-1)
        {
            printf("No of %d is %d\n",a[i],b[i]);
        }
    }
    return 0;
}