#include<stdio.h>
void main()
{
     int i=1;
    int x=2;
    int n=32;
    long xpow=1;
    int d=0;
    int h=0;
    scanf("%d",&h);
    int o=0;
    scanf("%d",&o);
    for(i=n;i>0;i--)
    {
        xpow=xpow*x;
    }printf("%d")
    int temp=xpow;
    if(h<o)
        {
          d=o-h;
          if(d<=temp)
          {
             printf("%d",d);
          }

        }
}
