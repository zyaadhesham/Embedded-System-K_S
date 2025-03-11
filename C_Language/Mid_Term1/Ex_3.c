#include<stdio.h>
#include<string.h>

int prime_numbers(int num);

int main(){

int number1, number2, i;

printf("Enter the first number: ");
scanf("%d",&number1);
printf("Enter the second number: ");
scanf("%d",&number2);

printf("The prime numbers are:");
for(i=number1;i<=number2;i++)
{
    if(prime_numbers(i)==0)
        printf("%d\t",i);
}

    return 0;
}

int prime_numbers(int num){

int j, flag = 0;

    for(j=num/2;j>=2;j--)
    {
        if(num%j==0)
        flag = 1;    
    }

    return flag;
}