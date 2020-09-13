#include<stdio.h>
#include<conio.h>
void main()
{
 int a[4]={1,2,3,4},j;
  int *x;
 x=&a[0];
 
 
  for(j=0;j<=3;j++)
  {
   printf("a[j]=%d\n",j,*x);
   x++;//x+1;
  }
 
getch();
}