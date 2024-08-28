#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row size and column size\n");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
    int a[m][n];
    printf("Enter the elements of array\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The input array is\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
                if(i==j||i+j==n-1)
                   printf("%d\t",a[i][j]);
                else
                   printf("\t");
        }
        printf("\n");
    }
    }
    else
         printf("Not a square matrix");
    return 0;
}