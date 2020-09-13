#include<stdio.h>

void main() 
{
	struct student
	{
	char name[10];
	int age,roll;
	};

	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
	printf("enter name,age,roll of %d student:",i+1);
	scanf("%s%d%d",&s[i].name,&s[i].age,&s[i].roll);
	}

	for(i=0;i<3;i++)
	{
	printf("\n---------Details of %d student-----",i+1);
	printf("\n%s %d %d",s[i].name,s[i].age,s[i].roll);
	}
	
}	