#include<stdio.h>

int main(){

int i, counter=0;
char text[100];

printf("\nEnter a string: ");
gets(text);

for(i=0;text[i]!='\0';i++)
{
    counter++;
}

printf("Length of string: %d",counter);

}