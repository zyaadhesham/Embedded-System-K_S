#include<stdio.h>
#include<string.h>

int main(){

int i, counter=0;
char text[100], rev[100];

printf("\nEnter the string : ");
gets(text);

for(i=strlen(text);i>0;i--)
{
    rev[counter]=text[i-1];
    counter++;
}

printf("Reverse string is : %s",rev);

}