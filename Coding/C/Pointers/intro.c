#include <stdio.h>
int main()
{
    int a=5,*p=&a;
    int b=8,*q=&b;
    printf("%u %u\n",p,q);
    if(q>p)
        printf("Hi");
    else
        printf("Hello");
}