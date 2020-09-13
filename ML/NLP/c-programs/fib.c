#include<stdio.h>  
void main()
{
  int i,e1=0,e2=1,next,total;
  printf("enter total number of elements in fib series:");
  scanf("%d",&total);
	
  printf("%d %d",e1,e2);
  for(i=0;i<total-2;i++)
  { 
    next=e1+e2;
    printf(" %d",next);
    e1=e2;
    e2=next;
  }
  
}

