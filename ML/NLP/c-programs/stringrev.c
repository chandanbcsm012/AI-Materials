#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("Enter string:");
gets(s);
strrev(s);
printf("reverse string=%s",s);
return 0;
}