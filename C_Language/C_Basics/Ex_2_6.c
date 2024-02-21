#include <stdio.h>

int main (){

int i, num, sum=0;

printf("\nEnter an integer: ");
scanf(" %d", &num);

for(i =0 ; i <= num ; i++)
{
    sum += i;
}
printf("\nSum = %d",sum);

    return 0;
}