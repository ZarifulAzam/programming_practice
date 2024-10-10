#include<stdio.h>
void main()
{
    int n=321;
    int temp=0;
    int rev=0;
    printf("%d\n",n);
    printf("the reverse numbers is:");
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }printf("%d",rev);
}
