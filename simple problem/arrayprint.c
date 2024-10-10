#include<stdio.h>
void main()
{
    int x[5],i=0,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        sum=sum+x[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d",x[i]);
         if(i<4)
        {
            printf("+");
        }
    }
    printf("=%d",sum);
}
