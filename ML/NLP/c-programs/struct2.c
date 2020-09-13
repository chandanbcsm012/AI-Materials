#include<stdio.h>
void main() 
{
	struct student
	{
	char name[10];
	int age,roll;
	};

	struct student s={"sonu",10,101};

	printf("%s,%d,%d",s.name,s.age,s.roll);

}	