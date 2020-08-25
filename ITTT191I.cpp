#include <stdio.h>
int main ()
{
	long long n, tong;
	scanf("%lld", &n);
	tong = (n*(n+1))/2;
	printf("%lld", tong%2);
	return 0;
}
