#include<stdio.h>
void main()
{
    int n=0,fact=1;
    scanf("%d",&n);
     printf("%d!=",n);
    while(n>0)
    {
        fact=fact*n;
         printf("%d",n);
          if(n>1)
         {
             printf("*");
         }
         n--;
    }
    printf("=%d",fact);
}
