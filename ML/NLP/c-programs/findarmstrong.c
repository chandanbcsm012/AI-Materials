#include<stdio.h>  
void main()
{
  int num,digit,sum=0,temp,i;
	
printf("******Armstrong Numbers from 1 to 1000***\n");

for(i=1;i<=1000;i++)
{
 
 temp=num=i;  
 sum=0;
  while(num>0)
  { 
    digit=num%10;
    sum=sum+digit*digit*digit;
    num=num/10;
  }
 
  if(temp==sum)
  { 
   printf("%d\n",temp);	
  }
 
 }  
}

