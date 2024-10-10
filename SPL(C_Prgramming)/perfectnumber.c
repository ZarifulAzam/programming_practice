#include<stdio.h>
void main()
{
    int a=0;
    int i=1;
    int sum=0;
    scanf("%d",&a);
    for(i;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
         if(sum==a)
             {
                 printf("perfect number");
             }
         else
            printf("not a perfect number");
}

