#include <stdio.h>
int main()
{
    int a[5],i,s=0;
    printf("Enter the marks of 5 students ");
    for(i=0;i<=4;i++)
        scanf("%d ",&a[i]);
    for(i=0;i<=4;i++)
    {
        s+=a[i];
    }
    printf("The sum is %d an average is %f",s,(float)s/5);
    return 0;
}