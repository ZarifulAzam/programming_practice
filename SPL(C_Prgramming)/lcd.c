#include<stdio.h>
void main()
{
    int a=0,b=0;
    int lcd=0;
    int i=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("showing output:\n");
    if(a>b)
    {
        for(i=a;i>0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                lcd=(a*b)/i;
                printf("lcd=%d",lcd);
                break;
            }
        }
    }
    if(a<b)
        for(i=b;i>0;i--)
        {
             if(a%i==0&&b%i==0)
             {
                 lcd=(a*b)/i;
                printf("lcd=%d",lcd);
             break;
             }
        }

        if(a==b)
            {
            lcd=a;
            printf("lcd=%d",lcd);
             }
}
