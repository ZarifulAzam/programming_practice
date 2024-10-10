#include<stdio.h>
#include<string.h>

void main()
{
    int i,num,t;
    scanf("%d",&t);
    if(t>=1 && t<=3)
    {
        for(i=1; i<=t; i++)
        {
            char number[100];
            scanf("%s",&number);
            int lastdigit = number[strlen(number)-1]-'0';

            if(lastdigit%2!=0)
            {
                printf("Odd\n");
            }
            else
            {
                printf("Even\n");
            }
        }
    }
}
