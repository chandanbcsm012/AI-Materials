#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fpr,*fpw;
	char c;
	fpr=fopen("msg.txt","r");
	fpw=fopen("E:/msg.txt","w");
	
	if(fpr==NULL||fpw==NULL)
	{
		printf("Unable to copy paste file");
		exit(0);
	}
	else
	{
		while(1)
		{
		c=fgetc(fpr);
		if(c==EOF)
		break;
		fputc(c,fpw);
		}
	}
	fclose(fpr);
	fclose(fpw);
	printf("done");
	return 0;
}
