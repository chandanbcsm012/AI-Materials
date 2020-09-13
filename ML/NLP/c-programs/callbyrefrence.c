#include<stdio.h>

void show();

void main()
{
	int a=10;
	show(&a);
	printf("%d",a);	

}

void show(int *p)
{
	*p=*p+10;
}
