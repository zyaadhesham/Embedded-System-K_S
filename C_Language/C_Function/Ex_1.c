#include<stdio.h>

int prime_numbers(int num);

int main(){

int i, num_1, num_2, temp;

printf("Enter two numbers (intervals):");
scanf("%d %d", &num_1, &num_2);

printf("Prime numbers between %d and %d are: ", num_1, num_2);

for(i=num_1;i<=num_2;i++)
{
    temp=prime_numbers(i);
    if(temp==0)
    {
        printf("%d ",i);
    }
}

return 0;
}

int prime_numbers(int num)
{
int j, temp=0;

for(j=2;j<=num/2;j++)
{
    if(num%j==0)
    {
        temp=1;
        break;
    }
}

return temp;
}