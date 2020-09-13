#include<stdio.h>
void main() 
{
	struct student
	{
	char name[10];
	int age,roll;
	};

	struct student s;

	printf("enter name,age,roll of student:");
	scanf("%s%d%d",&s.name,&s.age,&s.roll);

	printf("------Details of Student------\n");
	printf("Name is:%s ,Age is:%d ,Roll is:%d",s.name,s.age,s.roll);

}	