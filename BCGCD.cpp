#include <stdio.h>
long long GCD(long long a,long long b)
{
    if (b==0) return a;
    else return GCD(b,a%b);
}
int main ()
{
	long long a, b, sbt;
	long long LCM=0;
	int i;
	scanf("%lld", &sbt);
	for(i = 0; i < sbt; i++)
	{
		scanf("%lld%llld", &a, &b);
		LCM = (a/GCD(a,b))*b;
		printf("%lld %lld\n", GCD(a,b), LCM);
	}
}
