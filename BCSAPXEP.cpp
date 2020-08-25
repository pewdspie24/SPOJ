#include <stdio.h>
#include <algorithm>
int main ()
{
	int n,i;
	int a[1001];
	scanf("%d", &n);
	for (i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	std :: sort(a,a+n);
	for (i=0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
