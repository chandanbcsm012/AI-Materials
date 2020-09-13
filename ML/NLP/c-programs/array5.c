#include<stdio.h>


void main() 
{
	int a[3];
	int i;
	printf("Enter elements of array:");
	for(i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("You Entered Following elements:\n");
	for(i=0;i<3;i++)
	{
	printf("%d\n",a[i]);
	}
	
}	