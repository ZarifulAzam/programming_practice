#include<stdio.h>
void main()
{
    int n=0,rev=0,temp=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("%d",rev);
}
