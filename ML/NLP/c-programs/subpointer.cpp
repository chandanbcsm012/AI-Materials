#include<stdio.h>
#include<conio.h>
int main()
{
 int a,*x;
 float b,*y;
 char c,*z;
 x=&a;
 y=&b;
 z=&c;
 printf("Original address in x=%u\n",x);
 printf("Original address in y=%u\n",y);
 printf("Original address in z=%u\n",z);

 x=x-1;
 y=y-1;
 z=z-1;
 
 printf("New address in x=%u\n",x);
 printf("New address in y=%u\n",y);
 printf("New address in z=%u\n",z);

return 0;
}