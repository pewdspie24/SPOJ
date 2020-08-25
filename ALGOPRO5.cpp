#include <stdio.h>
#include <math.h>
int main ()
{
	int i,n;
	long long tong=0;
	scanf("%d", &n);
	for(i=1; i <= n; i++)
	{
		tong+=pow(2,i);
	}
	printf("%lld", tong);
	return 0;
}
