#include<stdio.h>

void main()
{
	int p = 6,c = 2,i,q;

	for(i = 65 ; i < 65+7; i++)
	{
	printf("%c%s", i," ");
	}
	for(i = 70 ; i > 64; i--)
	{
	printf("%c%s", i, " ");
	}
	printf("\n");

	sort(p, c);
	printf("\n");
}

sort(int q, int c)
{
int i;
for(i = 65 ; i < 65+q; i++)
{
printf("%c%s", i," ");
}

if(q != 0)
{
for(i = 0; i < c; i++)
{
printf("%s"," ");
}
 order(q-1, c);
}
}

order(int p, int c)
{
int i;

for(i = 65+p ; i > 64; i--)
{
printf("%c%s", i, " ");
}
 if(p!=0)
  {
  printf("\n");
  c = c+4;
  sort(p, c);
  }
}

