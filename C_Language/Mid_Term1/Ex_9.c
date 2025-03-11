#include<stdio.h>
#include<string.h>

void revers();

int main(){

revers();

    return 0;
}

void revers(){

int i, j;
char a[100];

printf("Enter the string: ");
gets(a);

for(i=0;i<strlen(a);i++)
{
    if(a[i]==' ')
    {
        for(j=i;j<strlen(a);j++)
            printf("%c",a[j+1]);
    }
}
printf(" ");
for(i=0;i<strlen(a);i++)
{
    if(a[i]!=' ')
    {
        for(j=i;j<strlen(a);j++)
            {
            printf("%c",a[j]);
            if(a[j]==' ')
                break;
            }
    }
    break;
}
}