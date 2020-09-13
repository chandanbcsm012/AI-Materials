#include<stdio.h>


void main() 
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,3,4,5};
	int i,j;

	printf("\n matrix is:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
}	