#include<stdio.h>
void main()
{
    int n[4],i=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("odd=");
    for(i=0;i<4;i++)
    {
         if(n[i]%2!=0)
        {
            printf("%d ",n[i]);
        }
    }
}
