#include <stdio.h>

int main (){

float a, b;

printf("\nEnter value of a: ");
scanf(" %f",&a);
printf("\nEnter value of b: ");
scanf(" %f",&b);

a = a + b;
b = a - b;
a = a - b;

printf("\nAfter swapping, value of a = %.2f",a);
printf("\nAfter swapping, value of b = %.2f",b);

    return 0;
}