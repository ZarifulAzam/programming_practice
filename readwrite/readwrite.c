#include<stdio.h>
void main()
{
    int sum=0;
    int e=0;
    int n=0;
    FILE *i;
    i=fopen("output.txt","w");
    scanf("%d",&n);
    for(e=1;e<=n;e++)
    {
        sum=sum+e;
        printf("%d",e);
         fprintf(i,"%d",e);
        if(e<n)
        {
             fprintf(i,"+");
           printf("+");
        }
    }
    printf("=%d",sum);
    fprintf(i,"=%d",sum);
}
