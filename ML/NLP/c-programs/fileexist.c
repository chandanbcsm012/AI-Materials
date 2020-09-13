#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char name[20];
	printf("enter filename:");
	gets(name);
	fp=fopen(name,"r");
 	if(fp==NULL)
	{
	printf("unable to open file");
	exit(0);	
	}
	else
	{
	printf("File exist");
	}
	fclose(fp);
}