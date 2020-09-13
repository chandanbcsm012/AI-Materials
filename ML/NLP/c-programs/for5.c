#include<stdio.h>

void main()
{

	int i;
	
	i=1;
	for(;;)
	{
		if(i<=10)
		{
		printf("%d\n",i);
		i++;
		}
		else
		{
		break;
		}
	}
}