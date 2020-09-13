#include<stdio.h>

void main()
{
	int *p,i=5;
		
	p=&i;
	*p=*p*10;

	printf("%d\n",i);
}