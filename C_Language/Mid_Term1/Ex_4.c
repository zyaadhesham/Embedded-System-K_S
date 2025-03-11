#include<stdio.h>

int revers_digit();

int main(){

printf("Enter the number: ");
revers_digit();

    return 0;
}

int revers_digit(){

char number;

scanf("%c",&number);

if(number!='\n')
{
    revers_digit();
    printf("%c",number);
}

}