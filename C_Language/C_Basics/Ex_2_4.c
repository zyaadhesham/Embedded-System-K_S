#include <stdio.h>

int main (){

float num;

printf("\nEnter a number: ");
scanf(" %f", &num);

if(num > 0)
{
    printf("\n%.2f is positive", num);
}
else if(num < 0)
{
    printf("\n%.2f is negative", num);
}
else
    printf("\nYou entered zero");

    return 0;
}