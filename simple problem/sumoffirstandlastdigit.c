#include<stdio.h>
void main()
{
    int n=0;
    int temp1=0,temp=0;
    int temp2=0;
    int sum=0;
    int t=0;

    scanf("%d",&t);
    while(1<=t&&t<=10000)
    {
        scanf("%d",&n);
        if(n>=0&&n<=65535)
        {
            if(n>9)
            {
                temp=n%10;
                temp1=temp;
                 while(n>10)
                 {
                     n=n/10;
                 }
                 temp2=n;
                 sum=temp1+temp2;
                  printf("sum = %d",sum);
                   //printf("\n");
            }
            else
                {
                    sum=n;
                    printf("sum = %d",sum);
                }
                printf("\n");
        }
        t--;
    }
}
