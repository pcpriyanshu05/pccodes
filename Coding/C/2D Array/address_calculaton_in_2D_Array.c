#include <stdio.h>
int main()
{
    int a[2][3]={5,9,2,6,1,8};
    printf("%u %u %u %u %u %u %u\n",a+1,a[0]+1,&a+1,&a[0]+1,&a[0][0]+1,&a[1]+1,&a[1][0]+1);
    return 0;
}