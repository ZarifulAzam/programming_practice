
#include<stdio.h>
void main()
{
    int n=0;
    int original=0;
    scanf("%d",&n);
    original=n;
    int i=0;
    int temp=0;
    int sum=0;
    printf("print sum of numbers:\n");
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp*temp*temp;
        n=n/10;

    }
    printf("sum=%d",sum);
    printf("\n");
    if(sum==original)
    {
        printf("this is armstrong number");
    }
    else
        printf("not armstrong number");


}
