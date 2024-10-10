
#include<stdio.h>
void main()
{
    int i=0;
    int count=0;
    int temp=0;
    for (i=50; i>=10; i--)
    {
        printf("%d\t",i);
        count++;
        temp=count%10;
        if (temp==0)
        printf("\n");
    }

}
