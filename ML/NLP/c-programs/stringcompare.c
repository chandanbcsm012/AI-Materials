#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
printf("Enter  2 string:");
gets(s1);
gets(s2);
if(strcmp(s1,s2)==0)
{
	printf("\nBoth Strings are same");
}
else
{
	printf("\nBoth Strings are different");
}
return 0;
}