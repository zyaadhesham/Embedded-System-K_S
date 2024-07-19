#include<stdio.h>

int main(){

int x, i, num;
printf("\nEnter no of elements : ");
scanf("%d",&x);

int a[x];

for(i=0;i<x;i++)
{
    scanf("%d",&a[i]);
}

printf("\nEnter the elements to be searched : ");
scanf("%d",&num);

for(i=0;i<x;i++)
{
    if(num==a[i])
    {
        printf("\nNumber found at the location = %d",i+1);
    }
}
}