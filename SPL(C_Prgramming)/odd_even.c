#include<stdio.h>

int main(){

    int t=0, n=0;
    scanf("%d",&t);

        while(t>0 && t<=10) {
            scanf("%d",&n);
            if(n>=0 && n<=5000) {
                if(n%2 == 0) {
                    printf("even\n");
                } else {
                    printf("odd\n");
                }
            }
            t--;
        }



}

