#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *p;
	p=(char*)malloc(5);
	strcpy(p,"india");
	printf("%s\n",p);
	p=realloc(p,20);
	strcat(p," is a good country");
	printf("%s",p);
	free(p);
}