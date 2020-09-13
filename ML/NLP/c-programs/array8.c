#include<stdio.h>

int sumofelements();
void main() 
{
	int sum;
	int a[]={1,2,3,4,5};
	sum=sumofelements(a);
	printf("sum of elements:%d",sum);
}

int sumofelements(int a[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];
	}
	return sum;
}	