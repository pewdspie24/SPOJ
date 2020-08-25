#include <stdio.h>
int main ()
{
	int n, a,b,c,d, i, kt;
	scanf("%d", &n);
	for(int j = 0; j < n; j++)
	{
		kt = 0;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(a <= c)
		{
			for(i=a+1; i <= b; i++)
			{
				if(i >= c && i <= d)
				{
					printf("%d %d\n", a, i);
					kt = 1;
					break;
				}
			}
			if(kt == 0)
			{
				printf("%d %d\n", a, c);
			}
		}
		else
		if(a > c)
		{
			for(i=c+1; i <= d; i++)
			{
				if(i >= a && i <= b)
				{
					printf("%d %d\n", i, c);
					kt = 1;
					break;
				}
			}
			if(kt == 0)
			{
				printf("%d %d\n", a, c);
			}
		}
	}
	return 0;
}
