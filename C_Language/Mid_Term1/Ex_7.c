#include<stdio.h>

int sum(int num);

int main(){

int number=1;

printf("The sum numbers from 1 to 100 is: %d",sum(number));

    return 0;
}

int sum(int num){

if(num<100)
    return num + sum(num+1);
}