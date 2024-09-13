#include<stdio.h>

int power_number(int base, int power);

int main(){

int num, power;

printf("Enter base number: ");
scanf("%d",&num);
printf("Enter power number(positive integer): ");
scanf("%d",&power);
printf("%d^%d = %d", num, power, power_number(num,power));

return 0;
}
int power_number(int base, int power)
{
if(power!=0)
{
    return (base*power_number(base, power-1));
}
else
    return 1;
}