#include <stdio.h>
int main ()
{
	int n, i, j;
	long long tmp = 0;
	scanf("%d", &n);
	for(i=2; i < n; i++)
	for(j=i+1; j <= n; j++)
	{
		if(j%i == 0)
		{
			tmp = tmp + (j/i)*4;
		}
	}
	printf("%llu", tmp);
	return 0;
}
