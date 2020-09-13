#include<stdio.h>
int main()
{
char name[10];
int i;
printf("enter string:");
for(i=0;i<10;i++)
scanf("%c",&name[i]);
printf("%s",name);
return 0;
}