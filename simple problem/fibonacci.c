#include<stdio.h>
void main()
{
    int i=0;
    int sum=0;
    int n=30;
    int n1=0;
    int n2=1;
    for(i=0;i<n;i++)
    {
       sum=n1+n2;
       printf("%d ",n1);
       n1=n2;
       n2=sum;
    }
}
