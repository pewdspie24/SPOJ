#include <stdio.h>
int main ()
{
	long long k, n, a, b, x;
	scanf("%lld", &k);
	for(int i=0; i < k; i++)
	{
		scanf("%lld%lld%lld", &n, &a, &b);
		if(a*n-0*(2*a-b) > a*n-(n/2)*(2*a-b))
		printf("%lld\n", a*n-(n/2)*(2*a-b));
		else
		printf("%lld\n", a*n-0*(2*a-b));
	}
	return 0;
}
