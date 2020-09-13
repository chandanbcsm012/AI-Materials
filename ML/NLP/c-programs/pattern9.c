#include <stdio.h>

void main()
{
    int i,j;
    for(i=2;i<5;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
}
