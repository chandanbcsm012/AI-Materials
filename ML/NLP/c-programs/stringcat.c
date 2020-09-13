#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
printf("Enter  2 string:");
gets(s1);
gets(s2);
strcat(s1,s2);
printf("\nfirst string after merging:%s",s1);
return 0;
}