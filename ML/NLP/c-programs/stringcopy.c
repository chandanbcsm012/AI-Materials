#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
printf("Enter string:");
gets(s1);
//s2=s1; error
strcpy(s2,s1);
printf("s1=%s\ns2=%s",s1,s2);
return 0;
}