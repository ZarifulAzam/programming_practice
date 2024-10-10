#include<stdio.h>
int main()
{
    int n =0;
    printf("Please enter size of an Array\n");
    scanf("%d",&n);
    int arr[n];

    printf("Please insert %d elements of array\n",n);

    int bignumb = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        if(bignumb<arr[i]) {
            bignumb = arr[i];
        }

    }

    printf("Biggest number is %d\n",bignumb);

}
