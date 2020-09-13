#include<stdio.h>

void main() 
{
	int i;
	float k=0;
	struct student
	{
	char name[10];
	float marks[5];
	}s;

	printf("enter name of student");
	scanf("%s",s.name);
	printf("enter the marks");
	for(i=0;i<5;i++)
	{
	scanf("%f",&s.marks[i]);
	}
	for(i=0;i<5;i++)
	{
	k=k+s.marks[i];
	}
	printf("avg of mark is: %f",k/5);
}	