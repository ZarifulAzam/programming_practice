
#include<stdio.h>
void main()
{
    int a=0;
    int temp =0;
    int rev=0;
    int original = 0;
    scanf("%d",&a);
    original = a;
    for(;a>0;){
        temp = a%10;
        //printf("%d ",temp);
        rev = rev*10+temp;
        a = a/10;

    }
    printf("\n");
    printf("%d\n",rev);
    /*
    123 == 321??
    121 == 121
    */
    if(original == rev){
        printf("It's a Palindrom Number");
    } else {
        printf("It's not palindrom");
    }


}
