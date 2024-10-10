#include<stdio.h>
void main()
{
    int n=0;
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a postive number",n);
    }
    else if(n<0)
    {
        printf("%d is a negative number",n);
    }
    else
        printf("%d is neither positive nor negative",n);
}
