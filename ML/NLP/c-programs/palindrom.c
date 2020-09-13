#include<stdio.h>  
void main()
{
  int reverse=0,num,temp,copy;
  printf("enter the number:");
  scanf("%d",&num);
  copy=num;
  while(num>0)
  {
           temp=num%10;
           reverse=reverse*10+temp;
           num=num/10;
  }
	
  if(copy==reverse)
  {
	printf("palindrom");
  }
  else
  {
	printf("Not Palindrom");                                          }
}


