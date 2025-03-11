#include<stdio.h>
#include<math.h>

double root(int num);

int main(){

int number;

printf("Enter the number you want get its aquuare root: ");
scanf("%d",&number);

printf("The number after square root is %lf",root(number));

    return 0;
}

double root(int num){

if(num<0)
{
    printf("Please Enter a positive number.\n");
    return -1;
}

return sqrt(num);

}