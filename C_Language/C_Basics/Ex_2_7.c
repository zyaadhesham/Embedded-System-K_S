#include <stdio.h>

int main (){

int num, i;
unsigned long long factorial=1;

printf("\nEnter an integer: ");
scanf(" %d", &num);

if (num < 0)
    printf("\nError!!! Factorial of negative number doesn't exist");
else
{
    for(i = 1; i <= num; i++)
    {
        factorial *= i;
    }
printf("\nFactorial = %lu",factorial);
}

    return 0;
}