#include<stdio.h>


void main() 
{
	int a[3];
	int i,j,flag;
	printf("enter 3 elements in array:");
	for(i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]%2==0)
	printf("%d is even\n",a[i]);
	else
	printf("%d is odd\n",a[i]);
	for(j=2;j<a[i]/2;j++)
	{
		if(a[i]%j==0)
		{
		flag=1;	
		break;
		}
	}

	if(flag==0)
	printf("%d is prime\n",a[i]);
	else
	printf("%d is not prime\n",a[i]);
	}
	
}	