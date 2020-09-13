#include<stdio.h>

void main() 
{
	int a[3][4];
	int i,j,sum;
	printf("enter elements of 3x4 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}

	printf("\n matrix is:\n");

	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<4;j++)
		{
		printf("%d ",a[i][j]);
		sum=sum+a[i][j];
		}
		printf("   sum of elements=%d",sum);
		printf("\n");
	}
		
}	






