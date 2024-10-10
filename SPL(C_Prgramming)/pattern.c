
#include<stdio.h>
void main()
{
    int n=5;
    printf("enter n=");
    printf("%d\n",n);
    int i=0;
    int j=0;
    for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
          {
            printf("%d",j);
          }
          printf("\n");
    }
      printf("\n-------------------------------");
      printf("\n");

      for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
           {
               printf("%d",j);
           }
           printf("\n");
    }
    printf("\n-------------------------------");
    printf("\n");
     for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
          {
            printf("*");
          }

          printf("\n");
    }
    printf("\n-------------------------------");
    printf("\n");
     for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
          {
            printf("*");
          }
          printf("\n");
    }
    for(i=n-1; i>0;i--)
    {
        for(j=1;j<=i;j++)
          {
            printf("*");
          }
          printf("\n");
    }
    printf("\n-------------------------------");
}
