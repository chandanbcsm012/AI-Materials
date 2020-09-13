#include<stdio.h>

int* show();

void main()
{
	int a=10,*b;
	b=show(&a);
	printf("%d\n%d",*b,a);	

}

int* show(int *p)
{
	*p=100;
	return p;
}
