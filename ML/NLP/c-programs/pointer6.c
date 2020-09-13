#include<stdio.h>

void main()
{
	int i=10,j=20;
	int *p=&i;
	*p=20;
	p=&j;
	*p=i;
	printf("%d\n",i);
	printf("%d",j);		
}