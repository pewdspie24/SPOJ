#include <stdio.h>
int main ()
{
	int n, i, max = 0, min = 101;
	int a[1001];
	int gtmax, gtmin, d;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] < min)
		{
			min = a[i];
		}
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	if(a[0] == max && a[n-1] == min)
	{
		printf("0");
	}
	else
	{
		for(i = 0; i < n; i++)
		{
			if(a[i] == max)
			{
				gtmax = i+1;
				break;
			}
		}
		for(i = n-1; i >= 0; i--)
		{
			if(a[i] == min)
			{
				gtmin = i+1;
				break;
			}
		}
		if(gtmin > gtmax)
		{
			d = gtmax-1 + n-gtmin;
		}
		else
		{
			d = n-gtmin+gtmax-2;
		}
		printf("%d", d);
	}
	return 0;
}
