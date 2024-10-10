#include<stdio.h>
void main()
{
    int x=10,y=20;
    y=x;
    int z=test();
    printf("%d\n%d\n%d\n",x,y,z);
}
int test()
{
    int x=10,y=20,z=0;
    y=x;
    return (x*y);
}
