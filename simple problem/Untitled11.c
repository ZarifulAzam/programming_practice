#include<stdio.h>
void main()
{
    int i=0;
    while(i<10)
    {
        if(i==5)
        {
            continue;
        }
        i++;
    }printf("%d",i);
}
