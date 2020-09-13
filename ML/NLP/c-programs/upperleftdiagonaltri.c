#include<stdio.h>
void main() 
{
	int a[3][3];
	int i,j,sum=0;
	printf("enter elements of 3x3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}

	printf("Matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
		{
		sum=sum+a[i][j];
		printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	printf("Sum is:%d",sum);	
}	