#include<stdio.h>
int main()
{
 int t,j;
 printf("Enter Number Between 1 to 10\n");
 scanf("%d",&t);

 if(t<=10)
 {
     int j=t;

     int arr[j];
     int i;

     for(i=0;i<j;i++)
     {
         scanf("%d",&arr[i]);

     }

     printf("Numbers in the array are:\n");

     for(int i=0;i<j;i++)
     {
         if(arr[i]%2==0)
         {
             printf("Even\n");
         }
         else
         {
             printf("Odd\n");
         }
     }
 }
 else
 {
     printf("Number is Invalid\n");
 }
 return 0;
}
