#include<stdio.h>

int* show();

void main()
{
	int *p;
	p=show();
	printf("%d",*p);	

}

int* show()
{
	static int a=10;
	return &a;
}
