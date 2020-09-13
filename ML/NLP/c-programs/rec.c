#include<stdio.h>

void show();	

void main()
{
	show(1);
}

void show(int a)
{
	printf("show\n");
	if(a<3)
	{
	a++;
	show(a);
	}
	printf("bye\n");
}

