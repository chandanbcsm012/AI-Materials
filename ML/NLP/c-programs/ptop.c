#include<stdio.h>

void main()
{
	int a=10,*p1,**p2;

	p1=&a;
	p2=&p1;

	printf("%d\n%d\n%d",a,*p1,**p2);

}

