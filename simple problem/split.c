#include<stdio.h>

int main(){
int a =123;
int rev = 0;
int temp = 0;

while(a>0)
{
    temp = a%10;
    /***
    1st round
    temp = 3;
    rev = 0*10+3;
    rev = 3;

    2nd round
    temp = 2;
    rev = 3*10+2;
    rev = 32;

    3rd round
    temp = 1;
    rev = 32*10+1;
    rev = 321;
    ***/
    rev = rev*10+temp;
    a = a/10;
}


printf("%d",rev);
return 0;
}
