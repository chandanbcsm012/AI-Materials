#include<stdio.h>

void show();	

int k=30;
void main()
{
	int k=300;
	show();
	printf("%d\n",k);
	k=100;
	show();
	show();
}

void show()
{	
	printf("%d\n",k);
	k=50;
}

