#include<stdio.h>  
void main()
{
  int num,digit,sum=0,temp;
  printf("enter number:");
  scanf("%d",&num);
  temp=num;

  while(num>0)
  { 
    digit=num%10;
    sum=sum+digit*digit*digit;
    num=num/10;
  }
 
  if(temp==sum)
  printf("armstrong number");
  else
  printf("not a armstrong number");
  
}

