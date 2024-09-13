#include<stdio.h>
#include<string.h>

void sentence();

int main(){

printf("Enter a sentence: ");
sentence();

return 0;
}
void sentence()
{

char c;

scanf("%c",&c);

if(c!='\n')
{
    sentence();
    printf("%c",c);
}
}