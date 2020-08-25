#include <stdio.h>
int a[1001][1001];
int main ()
{
	int n, i, j, k, kt, q;
	long long tong = 0, tmp, clgt=0;
	int b[1001];
	scanf("%d", &n);
	for(i=0; i < n; i++)
	for(j=0; j < n; j++)
	scanf("%d", &a[i][j]);
	for(i = 0; i<n; i++)
	clgt += a[i][n-1-i];
	tong = clgt/2;
	for(i=1; i<n; i++)
	{
		tmp = 0;
		for(j=1; j < n; j++)
		{
			b[j] = a[j][0]-i;
			tmp += a[j][0]-i;
		}
		if(tmp+i == tong)
		{
			kt = 0;
			for(k=1; k < n-1; k++)
			{
				for(q=k+1; q<n; q++)
				{
					if(b[k]+b[q] != a[k][q])
					{
						kt = 1;
						break;
					}
				}
			}
			if(kt == 0)
			break;
		}
	}
	printf("%d ", i);
	for(j=1; j<n; j++)
	printf("%d ", b[j]);
}
