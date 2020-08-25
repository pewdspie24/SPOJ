#include <stdio.h>
#include <math.h>
int main ()
{
	long long n, k, a, b;
	int i, j, t;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
	{
		scanf("%lld%lld", &n, &k);
		if(k % 2 == 1)
		{
			printf("1\n");
			continue;
		}
		else
		{
			a = 1;
			b = 2;
			j = 1;
			while(1)
			{
				if(j > n)
				break;
				if(k == a)
				{
					printf("%d\n", j);
					break;
				}
				else
				if((k-a) % b == 0)
				{
					printf("%d\n", j);
					break;
				}
				j++;
				a=a*2;
				b=b*2;
			}
		}
	}
	return 0;
}

