#include<stdio.h>
void arraysum(int a[])
{
    int i,sum=0,n=5;
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%d",sum);
}

void main()
{
    int n = 5;
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    arraysum(a);
}
