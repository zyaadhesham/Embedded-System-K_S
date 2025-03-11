#include<stdio.h>

int revers(int arr[], int size);

int main(){

int arr[100], size;
int i;

printf("Enter the size of array: ");
scanf("%d",&size);

printf("Enter the array elements:\n");
for(i=0;i<size;i++)
{
    printf("Enter the element %d: ",i+1);
    scanf("%d",&arr[i]);
}

printf("The array after revers is: ");
revers(arr,size);

    return 0;
}

int revers(int arr[], int size){

int i;

for(i=size-1;i>=0;i--)
    printf("%d\t",arr[i]);

}