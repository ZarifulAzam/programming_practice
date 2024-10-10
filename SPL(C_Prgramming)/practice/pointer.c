#include<stdio.h>
void main()
{
    int x=10;
    int *p;
    p=&x;
    printf("value of x=%d\n",x);
    printf("adress of x=%x\n",&x);
    printf("adress of p=%x\n",p);
    printf("content of p=%d\n",*p);
    printf("%x\n",&p);
}
