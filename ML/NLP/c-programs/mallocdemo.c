#include<stdio.h>
#include<stdlib.h>
void main()
{
	/*
	void *p;
	p=malloc(4);
	*/

	int *p;
	//p=malloc(4);
	//p=malloc(sizeof(int));
	p=(int*)malloc(sizeof(int));
	*p=10;
	printf("%d\n",*p);


	float *q;
	q=malloc(4);
	*q=10.2;
	printf("%f\n",*q);
	

	
}