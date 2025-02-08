#include<stdio.h>
#include<string.h>

int findName(char Names[][14], int n, char name[]);

void main(){

char names[5][14] ={"Alaa","Osama","Mamdouh","Samy","Hossain"};
char name[14];

puts("Enter your first name: ");
gets(name);

if(findName(names,5,name))
puts("Welcome");
else
puts("Goodby");
}

int findName(char Names[][14], int n, char name[])
{
int i;

for(i=0;i<n;i++)
{
    if(stricmp(name,Names[i])==0)
        return 1;
}
return 0;
}