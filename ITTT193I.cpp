#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n, i, p=0, max = 0;
	long long kt=0;
	int a[1001];
	int b[1001];
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a,a+n);
	for(i=0; i < n; i++)
	{
		if(i == n-1)
		{
			b[p] = kt;
			p++;
			break;
		}
		else
		{
			if(a[i] < a[i+1])
			kt++;
			else
			if(a[i] == a[i+1])
			{
				b[p] = kt;
				p++;
				kt = 0;
			}
		}
	}
	for(i=0; i < p; i++)
	{
		if(i == 0)
		max = b[i];
		else
		if(b[i] >= max)
		max = b[i];
	}
	printf("%d", max);
	return 0;
}
