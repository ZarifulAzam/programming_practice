#include<stdio.h>
void main()
{
    int n=0,i=0,temp=0,sum=0;
    scanf("%d",&n);
    int org=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp*temp*temp;
        n=n/10;
    }
    if(sum==org)
    {
        printf("%d is an armstrong number",sum);
    }
    else
        printf("%d is not an armstrong",sum);
}
