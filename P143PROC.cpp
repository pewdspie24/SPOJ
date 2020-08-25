#include <stdio.h>
#include <math.h>
int main ()
{
	int y,k,n,i, tmp = 0, tmpmax;
	scanf("%d%d%d",&y, &k, &n);
	if(y >= n)  
	{
		printf("-1");
	}
	else
	{
		for(i=1; i+y <= n; i++)
		{
			if((i+y) % k == 0)
			{
				tmp = i;
				break;
			}
		}
		for(i = n; i > 0; i--)
		{
			if(i % k == 0)
			{
				tmpmax = i;
			}
		}
		if(tmp != 0)
		{
			for(i= tmp; i <= sqrt(n-y); i++)
			printf("%d %d ", i, tmpmax/i);
		}
		else
		{
			printf("-1");
		}
	}
	return 0;
}
