/#include <stdio.h>
int main()
{
    int m,n,i,j,s=0;
    float avg;
    printf("Enter the row size and column size\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in the 2D array\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           s+=a[i][j];
    }
    printf("The sum is %d and avg is %f",s,s/(m*n));
    printf("The array is\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
           printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}