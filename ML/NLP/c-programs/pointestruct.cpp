#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
   char name[10];
   int rollno;
   char branch[10];
 };
 struct student st1={"Salman",111,"CS"},*s;
 s=&st1;
 
 printf("Name=%s\n",s->name);
 printf("Rollno=%d\n",s->rollno);
 printf("Branch=%s\n",s->branch); 
 
getch();
}