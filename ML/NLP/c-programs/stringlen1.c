#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
int i,length=0;
printf("Enter string:");
gets(name);
for(i=0;name[i]!='\0';i++)
{
	length++;	
}
printf("length of string=%d",length);
return 0;
}