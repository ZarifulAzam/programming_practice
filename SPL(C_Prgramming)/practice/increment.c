#include<stdio.h>
void main()
{
    int i=0;
    ++i;
    printf("%d\n",i);
    i--;
    printf("%d\n",i--);
    for(;i<5;i++);
    {
        printf("%d\n",i++);
        printf("%d",i--);
    }
}
