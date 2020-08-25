#include <stdio.h>
int main ()
{
	int x[1001];
	int i, j, n, min,max,vl;
	scanf("%d", &vl);
	for(j=1; j<=vl; j++)
	{
		scanf("%d",&n);
		for (i = 1;i <=n;i++)
		{
			scanf("%d", &x[i]);
			if (i == 1)
			{
				max = x[i];
				min = x[i];
			}
			else
			{
				if (x[i]>=max)
				{
					max = x[i];
				}
				if (x[i]<=min)
				{
					min = x[i];
				}
			}
		}
		printf("%d\n", (max-min)*2);
	}
	return 0;
}

