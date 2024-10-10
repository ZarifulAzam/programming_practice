#include<stdio.h>
void main()
{
    int i=2;
    int a=0;
    int original=0;
    scanf("%d",&a);
    original=a;
    int flag=0;
    for(i;i<a;i++)
    {
        if(a%i==0)
         {
        flag=1;
        break;
         }
    }
    if(flag==0)
    {
        int temp = original;
        int temp2 = 0;
        int flag2 =0;
        int flag3 =0;

        while(temp >0){
            temp2 = temp%10;

            for(int i=2;i<temp2;i++){
                if(temp2%i == 0) {
                    flag2 = 1;
                    break;
                }
            }
            temp = temp/10;

            if(flag2 == 1) {
                flag3 = 1;
                break;
            }

        }

        if(flag3 == 0) {
            printf("It is a strange number\n");
        } else {
            printf("It is not a strange number\n");
        }

    } else {
        printf("It is not a strange number\n");
    }


}
