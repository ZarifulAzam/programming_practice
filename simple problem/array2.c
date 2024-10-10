#include<stdio.h>
void main()
{
    int a[5]={9,4,5,1,2};
    int i,l=a[0];
    for(i=1;i<5;i++)
    {
        if(l<a[i]);
        l=a[i];
    }
    printf("%d",l);
}
