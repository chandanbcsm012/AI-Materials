#include<stdio.h>
#include<string.h>
void main() 
{
	struct student
	{
	char name[10];
	int age,roll;
	};

	struct student s;

	s.age=10;
	s.roll=101;
	strcpy(s.name,"sonu");

	printf("%s,%d,%d",s.name,s.age,s.roll);

}	