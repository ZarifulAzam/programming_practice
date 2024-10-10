#include<stdio.h>
void main()
{

    int i=1;
    int x=6;
    int n=7;
    int sum=0;
    int xpow=1;
    printf("enter the value for n:\n");

    for(i=1;i<=n;i++)
    {
        xpow=xpow*x;
        sum=sum+xpow;
        printf("%d\n",xpow);

    }
    printf("Sum = %d",sum);

}
