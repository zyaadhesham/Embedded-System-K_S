#include<stdio.h>

int max_number_ones(int num);

int main(){

int number;

printf("Enter the number: ");
scanf("%d",&number);

printf("\nThe max number of one between two zeros is: %d",max_number_ones(number));

    return 0;
}

int max_number_ones(int num){

int bit, result, i = 0, counter = 0;
char string[31];
int max_number = 0;

for(bit=31;bit>=0;bit--)
{
    result = num>>bit;
    if(result & 1)
        counter++;
    else
    {
        if(counter>max_number)
            max_number = counter;    
        counter = 0;
    }
i++;
}

return max_number;
}