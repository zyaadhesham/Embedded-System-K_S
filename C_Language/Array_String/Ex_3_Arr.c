#include<stdio.h>

int main(){

int r, c, i, j;
printf("\nEnter rows and column of matrix: ");
scanf("%d %d",&r, &c);

int a[r][c],t[r][c];

printf("Enter elements of matrix:\n");

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    printf("Enter elements a%d%d: ", i+1, j+1);
    scanf("%d",&a[i][j]);
    }
}
printf("Entered Matrix:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        t[j][i]=a[i][j];
    }
}

printf("Transpose of Matrix: \n");

for(i=0;i<c;i++)
{
    for(j=0;j<r;j++)
    {
        printf("%d\t",t[i][j]);
    }
    printf("\n");
}

}