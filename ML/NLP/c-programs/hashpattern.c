#include <stdio.h>
void main()
{
   int i,j,temp=8;
 
   for ( i = 1 ; i <= 8 ; i++ )
   {
	if(i<=4)
	{
      		for ( j = 1 ; j < temp ; j++ )
		{
         	printf(" ");
		}
		temp--;	
		for ( j = 1 ; j <= 2*i - 1 ; j++ )
        	{
	 	printf("#");
 		}
        	printf("\n");
	}
	else
	{
      		
		for ( j =i ; j>=1 ; j-- )
		{
         	printf(" ");
		}
		temp--;	
		for ( j = 1 ; j <= temp*2-1 ; j++ )
        	{
	 	printf("#");
 		}
        	printf("\n");
	
	}
   }
}