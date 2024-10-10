#include<stdio.h>
void main()
{
    int a=0,b=0;
    int i=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("showing output:\n");
    if(a>b)
    {
        for(i=a;i>0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("gcd=%d",i);
                break;
            }
        }
    }
    if(a<b)
        for(i=b;i>0;i--)
        {
             if(a%i==0&&b%i==0)
             {
                printf("gcd=%d",i);
             break;
             }
        }
        if(a==b)
            printf("gcd=%d",a);
}
