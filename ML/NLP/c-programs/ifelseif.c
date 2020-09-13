#include<stdio.h>

void main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);

	if(marks>=60)
	{
	printf("B.tech\n");
	}

	else if(marks>=30&&marks<40)
	{
	printf("B.A.\n");
	}

	else if(marks>=40&&marks<50)
	{
	printf("B.com.\n");
	}

	else if(marks>=50&&marks<60)
	{
	printf("B.sc.\n");
	}

	else
	{
	printf("fail,go to field\n");
	}

	printf("regular life");
}