#include<stdio.h>
int main()
{
	FILE *fp;
	char data[]="india";
	int i;
	fp=fopen("msg.txt","w");
	if(fp==NULL)
	{
		printf("Unable to create file");
	}
	else
	{
		for(i=0;i<5;i++)
		fputc(data[i],fp);
	}
	printf("data successfully written..");
	fclose(fp);
	return 0;
}