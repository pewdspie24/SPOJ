#include <stdio.h>
int main ()
{
	int a[10];
	int b[10];
	int i,j,dem=10;
	for(i=0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i]%42;
	}
	for(i=0; i<9; i++)
	{
		if(b[i] != 42)
		{
			for(j=i+1; j< 10; j++)
			{
				if(b[i] == b[j])
				{
					dem--;
					b[j] = 42;
				}
			}
		}
	}
	printf("%d", dem);
}
