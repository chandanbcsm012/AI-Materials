#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c,*x,*y;
 x=&a;
 y=&c;
 printf("\t  address of a=%u\n",&a);
 printf("\t  address of b=%u\n",&b);
 printf("\t  address of c=%u\n",&c);

 printf("\t x-y=%d",x-y);

return 0;
}