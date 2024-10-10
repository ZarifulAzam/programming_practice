#include<stdio.h>
void main()
{
    int n=0;
    scanf("%d",&n);
    int i=0;
    int j=0;
    int k=0;
    for(i=n;i>=1;i--)
    {
        for(k=i-1;k>0;k--){
            printf("4 ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");

        }
          printf("\n");


    }
    for(i=n;i>=1;i--)
    {
        for(k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
