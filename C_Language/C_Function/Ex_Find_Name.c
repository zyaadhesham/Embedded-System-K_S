#include<stdio.h>
#include<string.h>

int findName(char Names[][14], int n, char name[])
{
int i;

for(i=0;i<n;i++)
{
    if(strcmp(name,Names[i])==0)
    {
        return 1;
    }
}

return 0;
}
void main(){

char name[14];
char names[5][14] ={"Alaa","Osama","Mamdouh","Samy","Hossain"};

puts("Enter your first name: ");
gets(name);

if(findName(names,5,name)==1)
puts("Welcome");
else
puts("Goodby");
}