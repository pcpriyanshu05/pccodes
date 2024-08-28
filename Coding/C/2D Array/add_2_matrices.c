#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row size and column size of the two matrices to be added\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           scanf("%d",&a[i][j]);
    }
    printf("1st Matrix is\n");
     for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("2nd Matrix is\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("The added matrix is\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
