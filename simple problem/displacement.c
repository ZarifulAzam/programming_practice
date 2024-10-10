#include<stdio.h>
void main()
{
    int a=0;
    scanf("%d",&a);
    int b=0;
    scanf("%d",&b);
    int s=0;
    b=b*2;
    s=a*b;
    if(a>=-100 &&a<=100 &&b>=0 &&b<=200)
    printf("%d",s);
    else
        printf("invalid");
}
