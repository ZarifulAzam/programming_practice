#include<stdio.h>
void main()
{
    int i=0;
    int flag=0;
    int temp=0;
    for(i=1000;i>=1;i--)
    {
        printf("%d\t",i);
        flag++;
        temp=flag%5;
        if(temp==0)
        {
            printf("\n");
        }
    }
}
