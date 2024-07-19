#include<stdio.h>

int main(){

int x, i;
printf("\nEnter the number of data: ");
scanf("%d",&x);

float average, a[x], sum=0;

for(i=0;i<x;i++)
{
    printf("%d. Enter number: ",i+1);
    scanf("%f",&a[x]);
    sum = sum + a[x];
}

    average = sum/x;
    printf("average = %2.2f",average);
}