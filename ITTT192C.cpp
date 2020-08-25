#include <stdio.h>
int main ()
{
	int n, k, i, min, tong = 0;
	int a[101];
	scanf("%d%d", &n, &k);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if(i == k)
		{
			min = a[i];
		}
	}
	for(i = 1; i <= n; i++)
	{
		if(a[i] >= min && a[i] > 0)
		{
			tong++;
		}
	}
	printf("%d", tong);
	return 0;
}

