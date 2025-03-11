#include<stdio.h>

int sum_digit(int num);

int main(){

int number;
printf("Enter the number: ");
scanf("%d",&number);

printf("The sum of digits is: %d",sum_digit(number));

    return 0;
}

int sum_digit(int num){

int digit, sum=0;

while(num>0)
{
digit = num % 10;
num = num / 10;
sum += digit;
}

return sum;
}