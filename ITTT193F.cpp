#include <stdio.h>
int main ()
{
	int n, k, t, i, j, p, tmp=0;
	int a[90];
	int b[100];
	long long tong, cc = 1000000000000000000;	
	scanf("%d", &t);
	for(j = 0; j < t; j++)
	{
		for(i = 1; i <= 90; i++)
		{
			a[i] = i;
		}
		tong = 1;
		scanf("%d%d", &n, &k);
		for(i = k; i > 1 ; i--)
		{
			for(p = n; p >= n-k+1; p--)
			{
				if(a[p] % i == 0 && a[p] != 1)
				{
					a[p] = a[p]/i;
					break;
				}
				if(p == n-k+1)
				{
					b[tmp] = i;
					tmp++;
				}
			}
		}
		for(i=n; i >= n-k+1; i--)
		{
				tong = tong*a[i];
				for(p = 0; p < tmp; p++)
				{
					if(tong % b[p] == 0)
					tong = tong/b[p];
				}
				if(tong > cc)
				tong = tong%1000000007;
		}
		printf("%lld\n", tong%1000000007);
	}
	return 0;
}
