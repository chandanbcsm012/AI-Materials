#include<stdio.h>

void main()
{
	int i=10,*p,*q,*r;
	p=&i;
	*p=20;

	q=&i;
	*q=30;

	r=&i;
	*r=40;

	printf("%d\n",*p);
	printf("%d\n",*q);
	printf("%d\n",*r);		
}