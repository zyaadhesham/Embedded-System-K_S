#include <stdio.h>

int main (){

int i, num, j;

printf("\nEnter the number ");
scanf(" %d", &num);

for (i=0; i<=num; i++)
{
    for (j=i; j<=num; j++ )
    {
        printf(" %d",j);
    }
    printf("\n");

}

    return 0;
}