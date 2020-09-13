#include<stdio.h>

void main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);

	switch(num)
	{
		case 2:
		printf("apple\n");
		case 1:
		printf("orange\n");
		case 4:
		printf("banana\n");
		case 3:
		printf("lnc\n");
	}

	printf("bye");
}