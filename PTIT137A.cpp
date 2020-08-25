#include <stdio.h>
#include <math.h>
int main ()
{
	int a[1001];
	int i, j=0, sl, tmp, d;
	while (1)
	{
		j++;
		d = 0;
		sl = 0;
		for(i=0; i < 4; i++)
		{
			scanf("%d", &a[i]);
		}
		if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == 0)
		break;
		while(1)
		{
			for(i=1; i < 4; i++)
			{
				if(a[i] == a[i-1])
				{
					d++;
				}
				else
				{
					d = 0;
					break;
				}
			}
			if(d != 3)
			for(i=0; i < 4; i++)
			{
				if(i==0)
				{
					tmp = a[i];
				}
				if(i != 3)
				{
					a[i] = a[i]-a[i+1];
					if(a[i] < 0)
					{
						a[i] = 0-a[i];
					}
				}
				else
				{
					a[i] = a[i]-tmp;
					if(a[i] < 0)
					{
						a[i] = 0-a[i];
					}
					sl++;
				}
			}
			else
			{
				printf("%d\n", sl);
				break;
			}
		}
	}
	return 0;
}
