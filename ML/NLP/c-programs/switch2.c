#include<stdio.h>
void main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);

	switch(num)
	{
		default:
		printf("wrong choice...\n");
		break;
		case 2:
		printf("apple\n");
		break;
		case 1:
		printf("orange\n");
		break;
		case 4:
		printf("banana\n");
		break;
		case 3:
		printf("lnc\n");
		break;
	}

	printf("bye");
}