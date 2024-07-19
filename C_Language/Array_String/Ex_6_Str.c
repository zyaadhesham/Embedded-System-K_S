#include<stdio.h>
#include<string.h>

int main(){

int i, counter=0;
char text[100], ch;

printf("\nEnter a string: ");
gets(text);
printf("\nEnter a character to find frequency: ");
scanf("%c",&ch);

for(i=0;text[i]!='\0';i++)
{
    if(ch==text[i])
    {
        counter++;
    }
}


printf("Frequency of %c = %d\n", ch, counter);

}