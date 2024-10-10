#include<stdio.h>
void main()
{
    int n=0,i=0,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag==1;
            break;
        }
    }
    if(flag==0)
        {
            printf("prime");
        }
}
