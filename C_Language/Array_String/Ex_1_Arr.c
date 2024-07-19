#include<stdio.h>

int main(){

float a[2][2], b[2][2], C[2][2];
int r,c;

printf("Enter the elements of 1st matrix\n");
for(r=0;r<2;r++)
{
    for(c=0;c<2;c++)
    {
        printf("Enter a%d%d: ", r+1, c+1);
        scanf("%f",&a[r][c]);
    }
}
printf("Enter the elements of 2nd matrix\n");
for(r=0;r<2;r++)
{
    for(c=0;c<2;c++)
    {
        printf("Enter b%d%d: ", r+1, c+1);
        scanf("%f",&b[r][c]);
    }
}
printf("\nSum of matrix:\n");
for(r=0;r<2;r++)
{
    for(c=0;c<2;c++)
    {
        C[r][c] = a[r][c] + b[r][c];
        printf("%2.1f\t",C[r][c]);
    }
    printf("\n");
}
}