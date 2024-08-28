#include <stdio.h>
int main()
{
  int m,n,i,j,e=0,o=0;
  printf("Enter the row size and column size\n");
  scanf("%d %d",&m,&n);
  int a[m][n];
  printf("Enter the elements in the array\n");
  for(i=0;i<=m-1;i++)
  {
    for(j=0;j<=n-1;j++)
        scanf("%d",&a[i][j]);
  }
  for(i=0;i<=m-1;i++)
  {
    for(j=0;j<=n-1;j++)
    {
        if(a[i][j]%2==0)
           e+=1;
        else
           o+=1;
    }
  }
  printf("no of even elements is %d and no of odd elements is %d",e,o);
return 0;
}