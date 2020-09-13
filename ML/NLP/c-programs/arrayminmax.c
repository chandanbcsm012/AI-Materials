#include<stdio.h>

void main() 
{
	int a[5];
	int i,max,min;
	printf("Enter elements of array:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}

	for(i=1;i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("Max Element:%d,Min Element:%d",max,min);
}	