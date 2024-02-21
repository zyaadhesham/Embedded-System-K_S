#include <stdio.h>

int main (){

float a, b, c;

printf("\nEnter three numbers ");
scanf(" %f %f %f",&a, &b, &c);

if(a >b)
{
    if(a > c)
        printf("\nLargest number = %.2f",a);
    else
        printf("\nLargest number = %.2f",c);
}
else
{
    if(b > c)
        printf("\nLargest number = %.2f",b);
    else
        printf("\nLargest number= %.2f",c);
}

return 0;
}