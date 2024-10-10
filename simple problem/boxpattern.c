#include<stdio.h>
void main()
{
    int t=0;
    int n=0;
    int i=0,j=0;
    scanf("%d",&t);
    while(t>=1&&t<=25)
    {
        scanf("%d",&n);
        if(n>=1&&n<=80)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }
        t--;
    }
}
