#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter row size and column size\n");
    scanf("%d %d",&m,&n);
    int a[m][n],atrans[n][m];
    printf("Enter the elements of array\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           atrans[j][i]=a[i][j];
    }
    printf("Original Matrix\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Transposed martrix\n");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
           printf("%d\t",atrans[i][j]);
        printf("\n");
    }
    return 0;
}