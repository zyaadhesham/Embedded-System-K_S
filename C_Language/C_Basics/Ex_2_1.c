#include <stdio.h>

int main (){

int num;

printf("\nEnter an integer you want to check ");
scanf(" %d", &num);

if ((num%2) == 0)

    printf("\n%d is even", num);

else

    printf("\n%d is odd", num);



    return 0;
}