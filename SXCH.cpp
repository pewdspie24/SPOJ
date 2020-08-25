#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
void SXCH(int n, int k)
{
	int a[10001];
	int i, j, p;
	for(i=0; i < n; i++)
	{
		a[i] = i+1;
		if(i < k)
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
	i = k-1;
	while(i >= 0)
	{
		for(p = k-1; p >= i; p--)
		{
			while(a[p] < n+p-(k-1))
			{
				a[p]++;
				for(j=0; j < k; j++)
				printf("%d", a[j]);
				printf("\n");
			}
		}
		for(p = i; p <= k-1; p++)
		{
			a[p] = a[p-1] + 1;
			a[p-1]++;
			printf("KT\n");
		}
		i--;
	}
}
int main ()
{
	int n, k;
	scanf("%d%d", &n, &k);
	SXCH(n,k);
	return 0;
}
