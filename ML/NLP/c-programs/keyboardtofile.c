#include<stdio.h>
int main()
{
	FILE *fp;
	char data[20];
	int i;
	fp=fopen("msg.txt","w");
	if(fp==NULL)
	{
		printf("Unable to create file");
	}
	else
	{
		printf("enter msg to write to file...");
		gets(data);	
		fputs(data,fp);
	}
	printf("data successfully written to file..");
	fclose(fp);
	return 0;
}