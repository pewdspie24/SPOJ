#include <stdio.h>
#include <math.h>
int k[100000];
bool snt(long long n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}
int main ()
{
	long long n,d,i,tmp,tich;
	scanf("%llu", &n);
	if (snt(n) == 1)
	printf("%llu 1", n);
	else
	{
		tmp = n;
		tich = 1;
		for (i = 1; i <= sqrt(tmp); i++)
		{
			if(snt(i) == 1 && n%i == 0) 
			{
				d = 0;
				while(n%i == 0)
				{
					n=n/i;
					d++;
					tich = tich*i;
				}
				printf("%llu %llu\n",i , d);
				if(n == 1)
				break;
			}
		}
		if(n != 1)
		{
			printf("%llu 1",tmp/tich);
		}
	}
	return 0;
}
