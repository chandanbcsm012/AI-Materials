#include<stdio.h>

void add();	//function prototype 

void main()
{
	printf("hello\n");
	add();		//function calling
	printf("\nhi\n");
	add();		//fun calling
	printf("\nbye");
}

void add()	// function definition
{
	int num1,num2,res;
	printf("enter 2 nos.");
	scanf("%d%d",&num1,&num2);
	res=num1+num2;
	printf("Addition is:%d",res);
}

