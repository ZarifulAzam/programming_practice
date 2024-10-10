#include<stdio.h>
void main()
{
    int a=0;
    int i=0;
    scanf("%d",&a);
    printf("convert to binary ");
    for(i=0;i>0;i++)
    {
        a=a/2;
        i=a%i;
        printf("%d",i);
    }

}
