#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char name[20],c;
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
	while(1)
	{
	c=fgetc(fp);
	if(c==EOF)
	break;
	printf("%c",c);
	}
	}
	fclose(fp);
}