#include <stdio.h>
int main ()
{
	int a[4], i, j, dem = 0;
	for(i=0; i <4; i++)
	scanf("%d", &a[i]);
	for(i=0; i<3; i++)
	{
		if(a[i] != 0)
		for(j=i+1; j<4; j++)
		{
			if(a[i] == a[j])
			{
				dem ++;
				a[j] = 0;
			}
		}
	}
	printf("%d", dem);
}
