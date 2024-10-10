#include<stdio.h>
void main()
{
     int n=0;
    int i=0;
    int j=0;
    scanf("%d",&j);
    int flag=0;
    printf("list of prime number:\n");
    for(n=1;n<=j;n++)
    {
        flag=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",n);

    }
}
