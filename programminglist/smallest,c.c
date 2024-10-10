
#include<stdio.h>
void main()
{
    int n=0,m=0,o=0;
    scanf("%d%d%d",&n,&m,&o);
    if(m<n&&m<o)
    {
        printf("%d is smallest",m);
    }
    else if(n<m&&n<o)
    {
        printf("%d is a smallest",n);
    }
    else
        printf("%d is smallest",o);
}
