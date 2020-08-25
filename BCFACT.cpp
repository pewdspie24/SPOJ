#include <stdio.h>
int main ()
{
	int i,j;
	long long a[1001];
	long long fact;
	while(1)
	{
		fact = 1;
		scanf("%llu", &a[i]);
		if (a[i] == 0)
		break;
		for(j=1; j <= a[i]; j++)
		{
			fact = fact*j;
		}
		printf("%llu\n", fact);
	}
	return 0;
}
