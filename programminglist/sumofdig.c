#include<stdio.h>
void main()
{
    int n=0;
    scanf("%d",&n);
    int i=0,temp=0,sum=0;
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("%d",sum);
}
