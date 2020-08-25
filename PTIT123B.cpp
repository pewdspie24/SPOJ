#include <stdio.h>
#include <math.h>
int main ()
{
	int a[1001];
	int i, j=0, sl, n, tmp, d;
	while (1)
	{
		j++;
		d = 0;
		sl = 0;
		scanf("%d", &n);
		if(n == 0)
		{
			break;
		}
		for(i=0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		while(1)
		{
			for(i=1; i < n; i++)
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
			if(d != n-1)
			for(i=0; i < n; i++)
			{
				if(i==0)
				{
					tmp = a[i];
				}
				if(i != n-1)
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
//			for(i=1; i < n; i++)
//			{
//				if(a[i] == a[i-1])
//				{
//					d++;
//				}
//				else
//				{
//					d = 0;
//					break;
//				}
//			}
			if(sl > 1000)
			{
				printf("Case %d: not attained\n", j);
				break;
			}
			if(d == n-1)
			{
				printf("Case %d: %d iterations\n", j, sl);
				break;
			}
		}
	}
	return 0;
}
