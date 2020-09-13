#include<stdio.h>

void main()
{
	int choice,a,b,r=0;

	printf("enter 2 no:");
	scanf("%d%d",&a,&b);
	
	printf("\n----Enter Choice-----\n\n");
	printf("1.Addition\n");
	printf("2.Multiplication\n");
	printf("3.Subtraction\n");
	printf("4.division\n");

	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		r=a+b;
		break;
		case 2:
		r=a*b;
		break;
		case 3:
		r=a-b;
		break;
		case 4:
		r=a/b;
		break;
		default:
		printf("wrong choice...\n");
	}
	
	printf("Result is=%d",r);

}



