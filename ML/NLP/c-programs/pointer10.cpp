#include<stdio.h>
int main()
{
  int i=15;
  printf("value of i =%d\n",i); 
  printf("address of i =%u\n",&i); 
  printf("value of i =%d\n",*&i);    
  return 0;
}
