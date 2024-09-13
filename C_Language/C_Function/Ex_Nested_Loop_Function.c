#include<stdio.h>

void for_loop(int j, int x);
void nested_loop(int x)
{
int i, j;

for (i=0;i<=x;i++)
{
    for_loop(i,x);
}
}
void for_loop(int i, int x)
{
int j;
for(j=i;j<=x;j++)
{
    printf("%d ",j);
}
printf("\n");
}
int main(){

int n;

scanf("%d",&n);

nested_loop(n);

return 0;
}