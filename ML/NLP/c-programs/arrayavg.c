#include<stdio.h>


void main() 
{
	int marks[5];
	int i,sum=0;
	float avg;
	printf("enter marks of 5 subjects:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&marks[i]);
	sum=sum+marks[i];
	}
	avg=(float)sum/5;
	printf("Average marks:%f",avg);
	
}	