#include<stdio.h>

int main()
{
	char name[5];
	int i;
	name[0]='m';
	name[1]='o';
	name[2]='n';
	name[3]='u';
/*	
	for(i=0;i<5;i++)
	{
	printf("%c",name[i]);
	}
*/
	printf("%s",name);
	//puts(name);	
	return 0;
}