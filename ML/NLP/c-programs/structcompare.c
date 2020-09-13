#include<stdio.h>
#include<string.h>
void main() 
{
	struct student
	{
	char name[10];
	int age,roll;
	};

	struct student s1,s2;

	printf("enter name,age,roll of 1st student:");
	scanf("%s%d%d",&s1.name,&s1.age,&s1.roll);

	printf("enter name,age,roll of 2nd student:");
	scanf("%s%d%d",&s2.name,&s2.age,&s2.roll);

	if(s1.age==s2.age&&s1.roll==s2.roll&&(!strcmp(s1.name,s2.name)))
	{
	printf("both students r same\n");
	}
	else
	{
	printf("both students are not same\n");
	}
}	




















