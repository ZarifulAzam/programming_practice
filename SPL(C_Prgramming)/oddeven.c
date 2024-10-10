#include<stdio.h>
void main()
{
    int n=0;
    int t=1;
    a:
        t++;
        printf("\n");
        scanf("%d",&n);
               if(n<=5000){
        if(n%2==0)
             printf("even");
        else
        printf("odd");}
        else
            printf("out of range");
            if(t<=10)
            goto a;
}
