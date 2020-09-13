#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][3]={{1,2,3},{4,5,6}},i,j;
  int *x;
 x=&a[0][0];
 
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("a[i][j]=%d\n",i,j,*x);
   x++;//x+1;
  }
 }
getch();
}