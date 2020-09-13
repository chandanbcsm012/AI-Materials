#include<stdio.h>

void main()
{
	int i,num,flag=0;	
	printf("enter number:");
	scanf("%d",&num);

	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
		flag=1;	
		break;
		}
	}

	if(flag==0)
	printf("No is prime");
	else
	printf("No is not prime");
}