#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("sum.txt","w");
    int a=0;
    int b=0;
    int c=0;
    int sum=0;
     scanf("%d%d%d",&a,&b,&c);
     sum=a+b+c;
     fprintf(ptr,"%d+%d+%d=%d",a,b,c,sum);
}
