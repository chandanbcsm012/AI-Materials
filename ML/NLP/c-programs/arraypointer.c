#include<stdio.h>

void main()
{
 	int a=2,b=3,c=4,d=5,i;
 	int *x[4];//array of pointer
 
	x[0]=&a;
 	x[1]=&b;
 	x[2]=&c;
 	x[3]=&d;
 
 	for(i=0;i<4;i++)
 	printf("%d\n",*x[i]);

}