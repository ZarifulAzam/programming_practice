#include<stdio.h>
void main()
{
    int n=0;
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("%d is a leap year",n);
    }
    else if(n%100!=0&&n%4==0)
    {
        printf("%d is a leap year",n);
    }
    else
        printf("%d is not a leap year",n);
}
