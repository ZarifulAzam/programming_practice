#include<stdio.h>

void main()
{
    float num, counter=0, sum = 0;
    float average=0;
    char id[100];
    char ccode[20];


    FILE *fptr, *fptr2;

    fptr = fopen("input.txt","r");
    fptr2 = fopen("output.txt","w");

    //fscanf(fptr,"%d", &num);

    while (fscanf(fptr, "%s %s %f",&id,&ccode,&num )==3)
    {
        sum += num;
        counter++;
    }

    average = sum / counter;
    fprintf(fptr2,"%s average is %.2f\n",id,average);


    fclose(fptr);
    fclose(fptr2);


}
