#include <stdio.h>
int main()
{
    int m,n,i,j,r=0,c=0;
    printf("Enter the row size and column size\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of array\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           r+=a[i][j];
        printf("The sum of row %d is %d\n",i+1,r);
    }
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=m-1;i++)
           c+=a[i][j];
        printf("The sum of column %d is %d\n",j+1,c);
    }
    return 0;    
}