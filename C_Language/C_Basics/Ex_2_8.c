#include <stdio.h>

int main (){

float num1, num2;
char choice;

printf("\nEnter opeartor either + or - or * or /: ");
scanf(" %c", &choice);
printf("\nEnter two operands: ");
scanf(" %f %f", &num1, &num2);

switch(choice)
{
    case('+'):
    {
     printf("\n%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }
    break;
    
    case('-'):
    {
       printf("\n%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    }
    break;

    case('*'):
    {
       printf("\n%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    }
    break;

    case('/'):
    {
     printf("\n%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    }
    break;

    default:
        printf("\nError, operator isn't correcet");
    break;
}

    return 0;
}