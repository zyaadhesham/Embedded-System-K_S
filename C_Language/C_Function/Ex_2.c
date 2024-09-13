#include<stdio.h>

int factorial(int num);

int main(){

int number;

printf("Enter an positive number: ");
scanf("%d",&number);

printf("Factorial of %d = %d", number, factorial(number));
return 0;
}
int factorial(int num)
{                            

if(num>1)
    return num*factorial(num-1);
}