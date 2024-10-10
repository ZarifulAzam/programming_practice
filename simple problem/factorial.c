#include<stdio.h>
void main()
{
    int i=1;
    int fact=1;
    int n;
    printf("type any number ");
    scanf("%d",&n);
    printf("print factorial\n");
    for(i;i<=n;i++)
    {
        //printf("%d  ",i);
        fact=fact*i;
           // printf("\n");
            printf("%d",fact);

    }


}
