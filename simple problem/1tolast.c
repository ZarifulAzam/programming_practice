
#include<stdio.h>

void main()
{
    int n,temp,sum=0, count=0;
    scanf("%d",&n);
    while (n>0) {
        count++;
        printf("%d\n",count);
        temp = n%10;
        printf("%d\n",temp);
        n = n/10;
        printf("%d\n",n);
        if(count == 1 || n == 0) {
            sum += temp;
        }
    }
    printf("%d",sum);

}

