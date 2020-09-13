#include<stdio.h>  
void main()
{
  int reverse=0,num,temp;
  printf("enter the number:");
  scanf("%d",&num);

  while(num>0)
  {
           temp=num%10;
           reverse=reverse*10+temp;
           num=num/10;
  }

  printf("Reverse is:%d",reverse);	
}


