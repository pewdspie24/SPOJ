#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int main ()
{
	int n, i, dem=0;
	long long tong=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a,a+n);
	for(i=0; i < n; i++)
	{
		if(a[i] >= tong)
		{
			tong = tong+a[i];
			dem++;
		}
		else
		{
			continue;
		}
	}
	printf("%d", dem);
	return 0;
}
