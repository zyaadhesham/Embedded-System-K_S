#include <stdio.h>

int main (){

char alphabet;

printf("\nEnter an alphabet: ");
scanf(" %c", &alphabet);

if(alphabet=='a'||alphabet=='e'||alphabet=='o'||alphabet=='u'||alphabet=='i')
    printf("\n%c is a vowel", alphabet);
else
    printf("\n%c is a consonant", alphabet);

    return 0;
}