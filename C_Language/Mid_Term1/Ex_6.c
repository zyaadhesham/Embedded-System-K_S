#include<stdio.h>

int unique_number(int arr[], int size);

int main(){

int a[100], size, i;

printf("Enter the size of array: ");
scanf("%d",&size);

for(i=0;i<size;i++)
{
    printf("Enter the element %d: ",i+1);
    scanf("%d",&a[i]);
}

printf("The unique number is: %d",unique_number(a,size));

    return 0;
}

int unique_number(int arr[], int size){

int i, j, flag;

for(i=0;i<size;i++)
{
    flag=0;
    for(j=0;j<size;j++)
    {
        if(arr[i]==arr[j] && i!=j)
        {
            flag=1;
            break;    
        }       
    }
    if(flag==0)
        return arr[i];
}

return -1;
}