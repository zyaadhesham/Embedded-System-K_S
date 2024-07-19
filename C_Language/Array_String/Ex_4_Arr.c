#include<stdio.h>

int main(){

int a[30], x, num, i, location;
printf("\nEnter no of elements : ");
scanf("%d\n",&x);

for(i=0;i<x;i++)
{
    scanf(" %d",&a[i]);
}

printf("\nEnter the element to be inserted : ");
scanf("%d",&num);

printf("Enter the location : ");
scanf("%d",&location);

for(i=x;i>=location;i--)
{
    a[i]=a[i-1];
}

x++;
a[location-1]=num;

for(i=0;i<x;i++)
{
    printf("%d",a[i]);
}
                            //--------Another solution-------------
/*int x, num, i, location;
printf("\nEnter no of elements : ");
scanf("%d\n",&x);

int a[x];

for(i=0;i<x;i++)
{
    scanf(" %d",&a[i]);
}

printf("\nEnter the element to be inserted : ");
scanf("%d",&num);

printf("Enter the location : ");
scanf("%d",&location);

for(i=0;i<x;i++)
{
    if(i==location-1)
    {
        printf("%d",num);
    }
    printf("%d",a[i]);
}*/

}