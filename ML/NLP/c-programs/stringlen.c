#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
int length;
printf("Enter string:");
gets(name);
length=strlen(name);
printf("length of string=%d",length);
return 0;
}