#include<stdio.h>
void main()
{
    int n=0,m=0,o=0;
    scanf("%d%d%d",&n,&m,&o);
    if(m>n&&m>o)
    {
        printf("%d is largest",m);
    }
    else if(n>m&&n>o)
    {
        printf("%d is a largest",n);
    }
    else
        printf("%d is largest",o);
}
