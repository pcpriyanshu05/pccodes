#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row size and column size\n");
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
        {
            if(i==0||i==m-1||j==0||j==n-1)
                printf("%d\t",a[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}