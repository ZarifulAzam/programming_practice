#include<stdio.h>
int main(){
int temp = 5;
for(int i=0; i<5;i++) {

    for(int j=0;j<i;j++) {
         printf("@");
    }
    for(int k=temp;k>0;k--) {
         printf("x");
    }
    temp = temp-2;
    for(int j=0;j<i;j++) {
         printf("$");
    }

    printf("\n");
}
temp = 0;
for(int i=4; i>0;i--) {

    for(int j=0;j<i;j++) {
         printf("#");
    }
    for(int k=temp;k>0;k--) {
         printf("X");
    }
    temp = temp+2;
    for(int j=0;j<i;j++) {
         printf("*");
    }
    printf("\n");
}

return 0;
}
