#include <stdio.h>
int main()
{
    int m,n,i,j,s=0;
    printf("Enter the order of square matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    if(m==n)
    {
    printf("Enter the elements of array\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;i++)
      {
        for(j=0;j<=n-1;j++)
        {
            if(i==j)
              s+=a[i][j];
        }
      }
    printf("The sum of diagonal elements is %d",s);
    }
    else
       printf("Not a square matrix");
    return 0;
}