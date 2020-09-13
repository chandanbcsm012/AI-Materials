#include <stdio.h>
void main()
{
   int i,j,temp=5;
 
   for ( i= 1 ; i<= 5 ; i++ )
   {
      	for ( j = 1 ; j< temp ; j++ )
	{
         printf(" ");
	}
        
	temp--;
      	
	for ( j = 1 ; j <= 2*i - 1 ; j++ )
        {
	 printf("*");
 	}
	
        printf("\n");
   }
}