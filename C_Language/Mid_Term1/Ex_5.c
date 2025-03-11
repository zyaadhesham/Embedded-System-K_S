#include<stdio.h>

int binary_number(int num);

int main(){

int number;

printf("Enter the number: ");
scanf("%d",&number);

printf("The number of ones in binary number %d is: %d", number, binary_number(number));

    return 0;
}

int binary_number(int num){

int bit, result, counter=0;

for(bit=31;bit>=0;bit--)
{
    result = num>>bit;
    if(result & 1)
        counter++;
}

return counter;
}