#include<stdio.h>
int main()
{
    int n =0;
    printf("Please enter size of an Array\n");
    scanf("%d",&n);
    int arr[n];

    printf("Please insert %d elements of array\n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    /* 2,5,1,3,4 */

    int bignumb = 0;
    for(int i=0;i<n;i++)
    {
        if(bignumb<arr[i]) {
            bignumb = arr[i];
        }
        //printf("%d ",arr[i]);
    }

    printf("Biggest number is %d\n",bignumb);

}
