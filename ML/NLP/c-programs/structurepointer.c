#include<stdio.h>

void main()
{
 struct student
 {
   char name[10];
   int rollno;
   char branch[10];
 };
 
 struct student s={"Salman",111,"CS"},*p;
 p=&s;
 
 printf("Name=%s\n",p->name);
 printf("Rollno=%d\n",p->rollno);
 printf("Branch=%s\n",p->branch); 
 
}