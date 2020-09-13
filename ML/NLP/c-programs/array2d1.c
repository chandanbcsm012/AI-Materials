#include<stdio.h>

void main() 
{
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		a[i][j]=i+j+1;
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
}	