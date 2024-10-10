#include<stdio.h>
void main()
{
    int a=0;
    int i=0;
    int sum;
    for(a=1;a<=8128;a++)
    {
        sum=0;
        for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum=sum+i;

            }
        }

            if(sum==a)
            {
                printf("%d\n",a);
            }


    }


}
