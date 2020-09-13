#include<stdio.h>

void main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);

	if(marks>=60)
	{
		printf("B.tech ");
		if(marks<70)
		{
		printf(" with civil branch\n");
		}
		else
		{
		printf(" with cs/it/ec branch\n");
		}
		
	}
	else
	{
		printf("fail\n");
	}
	printf("regular life");
}