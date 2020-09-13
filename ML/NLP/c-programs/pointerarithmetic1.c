#include<stdio.h>

void main()
{
	int *p,i=5;
		
	p=&i;
	*p++;
	printf("%d",*p);
}