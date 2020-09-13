#include<stdio.h>
void main()
{
int a=10;
int *b;
b=&a;
a=20;
printf("%d\n",a);
printf("%d\n",*b);

}