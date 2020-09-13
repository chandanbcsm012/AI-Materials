#include<stdio.h>

void print(); 

struct student
{
char name[10];
int age,roll;
};

void main() 
{

	struct student s1={"sonu",10,101};
	struct student s2={"monu",11,102};
	struct student s3={"gudda",12,103};
		
	print(s1);
	print(s2);
	print(s3);
}

void print(struct student s)
{
	printf("%s,%d,%d\n",s.name,s.age,s.roll);
}	




















