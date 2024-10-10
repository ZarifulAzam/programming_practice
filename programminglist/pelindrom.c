#include<stdio.h>
void main()
{
    int n=0;
    scanf("%d",&n);
    int i=0;
    int temp=0;
    int sum=0;
    printf("print sum of numbers:\n");
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;

    }
    printf("sum=%d",sum);


}
