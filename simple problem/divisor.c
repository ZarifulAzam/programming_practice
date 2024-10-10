
#include<stdio.h>
int main()
{
    int t=0, c=0, n=0, i=0;
   // int c=0;
    //int n=0;
    //int i=0;
    scanf("%d",&t);
    while(t>0&&t<=3)
    {
        scanf("%d",&n);

        if(n>=1&&n<=50)
        {
            if(c>=0&&c<=t);
                {
                    c=c+1;
                  printf("case %d: ",c);
                }
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
        t--;
    }
    return 0;
}
