#include<stdio.h>

int main()
{
 int a=10,*x,*y;
 x=&a;
 y=&a;
 if(x==y)
 printf("pointer x and y pointing to same variable");
 else
 printf("pointer x and y pointing to different variable");

return 0;
}