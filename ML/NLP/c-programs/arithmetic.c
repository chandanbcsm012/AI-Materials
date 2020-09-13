#include<stdio.h>
void main()
{
int i,j,r;
printf("enter 2 numbers:");
/*
scanf("%d",&i);
scanf("%d",&j);
*/
scanf("%d%d",&i,&j);
r=i+j;
printf("\nAddition=%d\n",r);
r=i-j;
printf("Subtraction=%d\n",r);
r=i*j;
printf("Multiplication=%d\n",r);
r=i/j;
printf("Division=%d\n",r);
r=i%j;
printf("Remainder=%d\n",r);
}