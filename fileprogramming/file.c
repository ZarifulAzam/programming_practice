#include<stdio.h>

void main()
{
    float num, counter=0, sum = 0;
    float average=0;

    FILE *fptr, *fptr2;

    fptr = fopen("input.txt","r");
    fptr2 = fopen("output.txt","w");

    //fscanf(fptr,"%d", &num);

    while (fscanf(fptr, "%f",&num )==1)
    {
        sum += num;
        counter++;
    }

    average = sum / counter;
    fprintf(fptr2,"zarif is %.2f\n",average);


    fclose(fptr);
    fclose(fptr2);


}
