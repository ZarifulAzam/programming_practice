
#include<stdio.h>
void main()
{
    int n=5;
    printf("numbers of star=");
    printf("%d\n",n);
    int i=0;
    int j=0;
    for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
          {
            printf("  *");
          }

          printf("\n");
    }

}
