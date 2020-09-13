#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("msg.txt","w");
	
	if(fp==NULL)
	{
		printf("Unable to create file");
		exit(0);
	}
	else
	{
		fprintf(fp,"%s\n%d","hello",10);
	}
	fclose(fp);
	printf("done");
	return 0;
}