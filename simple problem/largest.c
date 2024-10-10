#include<stdio.h>
void main()
{
    int a[5]={9,4,5,10,2};
    int i;
    for(i=1;i<5;i++)
    {
        if(a[0]<a[i])
        {
          a[0]=a[i];
        }

    }
    printf("%d",a[0]);
}

